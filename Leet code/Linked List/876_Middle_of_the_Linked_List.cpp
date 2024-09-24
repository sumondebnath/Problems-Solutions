/*
    Link : https://leetcode.com/problems/middle-of-the-linked-list/description/
*/

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        count = (count / 2) + 1;
        while (head != NULL)
        {
            count--;
            if (count == 0)
            {
                return head;
            }
            head = head->next;
        }
        return head;
    }
};