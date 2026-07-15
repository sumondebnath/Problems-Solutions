/*
    Link : https://leetcode.com/problems/palindrome-linked-list/description/
*/

class Solution
{
public:
    ListNode *ReverseLL(ListNode *head)
    {
        if (head == NULL or head->next == NULL)
            return head;
        ListNode *newNode = ReverseLL(head->next);
        ListNode *front = head->next;
        front->next = head;
        head->next = NULL;
        return newNode;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL or head->next == NULL)
            return true;
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next != NULL and fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *newHead = ReverseLL(slow->next);
        ListNode *first = head;
        ListNode *last = newHead;

        while (last != NULL)
        {
            if (first->val != last->val)
            {
                ReverseLL(newHead);
                return false;
            }
            first = first->next;
            last = last->next;
        }
        ReverseLL(newHead);
        if (head->val != newHead->val)
            return false;
        return true;
    }
};