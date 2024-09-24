/*
    Link : https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/
*/

class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL)
            return head;
        int count = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        cout << count << endl;
        int result = (count / 2);
        cout << result << endl;
        temp = head;
        if (temp->next == NULL)
            return NULL;
        while (temp != NULL and temp->next != NULL)
        {
            result--;
            if (result == 0)
            {
                ListNode *delNode = temp->next;
                temp->next = temp->next->next;
                delete delNode;
            }
            temp = temp->next;
        }

        return head;
    }
};