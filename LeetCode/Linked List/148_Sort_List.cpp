/*
    Link : https://leetcode.com/problems/sort-list/description/
*/

class Solution
{
public:
    ListNode *FindMiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode *MergeSort(ListNode *list1, ListNode *list2)
    {
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;

        while (list1 != NULL and list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }
        if (list1)
            temp->next = list1;
        else
            temp->next = list2;

        return dummy->next;
    }

    ListNode *sortList(ListNode *head)
    {
        if (head == NULL or head->next == NULL)
            return head;

        ListNode *middle = FindMiddle(head);
        ListNode *left = head;
        ListNode *right = middle->next;
        middle->next = NULL;

        left = sortList(left);
        right = sortList(right);

        return MergeSort(left, right);
    }
};