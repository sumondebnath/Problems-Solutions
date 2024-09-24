/*
    Link : https://leetcode.com/problems/odd-even-linked-list/description/
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* EvenHead = even;
        while(even!=NULL and even->next!=NULL){
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = even->next->next;
            even = even->next;
        }
        odd->next = EvenHead;

        return head;
    }
};