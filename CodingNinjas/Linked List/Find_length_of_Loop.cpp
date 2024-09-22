/*
    Link : https://www.naukri.com/code360/problems/find-length-of-loop_8160455?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM
*/

int FindLengthLoop(Node* slow, Node* fast){
    int count=0;
    fast =fast->next;
    while(slow!=fast){
        count++;
        fast=fast->next;
    }
    return count+1;
}

int lengthOfLoop(Node *head) {
    // Write your code here
    if(head==NULL or head->next==NULL){
        return 0;
    }

    Node* slow=head;
    Node* fast = head;

    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) {
            return FindLengthLoop(slow, fast);
        }
    }
    return 0;
}