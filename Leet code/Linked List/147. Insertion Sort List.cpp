/*
    https://leetcode.com/problems/insertion-sort-list/description/?envType=problem-list-v2&envId=sorting
*/

class Solution {
    public:
        ListNode* insertionSortList(ListNode* head) {
            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* prev = head;
            ListNode* curr = head->next;
            while(curr){
                if(curr->val >= prev->val){
                    prev = curr;
                    curr = curr->next;
                    continue;
                }
                ListNode* temp = dummy;
                while(temp->next->val < curr->val){
                    temp = temp->next;
                }
                prev->next = curr->next;
                curr->next = temp->next;
                temp->next = curr;
                curr = prev->next;
            }
    
            return dummy->next;
        }
    };