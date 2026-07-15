/*

*/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int deci = 0;
        while(head != NULL){
            deci = (deci << 1) | head->val;
            head = head->next;
        }
        return deci;
    }
};