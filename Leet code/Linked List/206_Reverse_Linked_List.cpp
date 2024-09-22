/*
    Link : https://leetcode.com/problems/reverse-linked-list/description/
*/

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *back = NULL;
        ListNode *current = head;
        while (current != NULL)
        {
            ListNode *front = current->next;
            current->next = back;
            back = current;
            current = front;
        }
        return back;
    }
};