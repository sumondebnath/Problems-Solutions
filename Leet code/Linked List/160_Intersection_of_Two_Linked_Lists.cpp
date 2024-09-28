/*
    Link : https://leetcode.com/problems/intersection-of-two-linked-lists/description/
*/

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == NULL and headB == NULL)
            return headA;
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        while (temp1 != temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;

            if (temp1 == temp2)
                return temp1;
            if (temp1 == NULL)
                temp1 = headB;
            if (temp2 == NULL)
                temp2 = headA;
        }
        return temp1;
    }
};