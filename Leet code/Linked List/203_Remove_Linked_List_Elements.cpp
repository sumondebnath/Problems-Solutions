/*
    Link : https://leetcode.com/problems/remove-linked-list-elements/description/
*/

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return head;
        ListNode *temp = head;
        while (temp != NULL and temp->next != NULL)
        {
            if (temp->next->val == val)
            {
                temp->next = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
        }
        if (head->val == val)
        {
            head = head->next;
        }

        return head;
    }
};