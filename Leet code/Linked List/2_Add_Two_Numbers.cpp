/*
    Link : https://leetcode.com/problems/add-two-numbers/description/
*/

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(-1);
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *curr = dummy;
        int carry = 0;

        while (temp1 != NULL || temp2 != NULL)
        {
            int sum = carry;

            if (temp1)
                sum += temp1->val;
            if (temp2)
                sum += temp2->val;

            ListNode *newNode = new ListNode(sum % 10);
            carry = sum / 10;

            curr->next = newNode;
            curr = newNode;

            if (temp1)
                temp1 = temp1->next;
            if (temp2)
                temp2 = temp2->next;
        }

        if (carry)
        {
            ListNode *newNode = new ListNode(carry);
            curr->next = newNode;
        }

        return dummy->next;
    }
};