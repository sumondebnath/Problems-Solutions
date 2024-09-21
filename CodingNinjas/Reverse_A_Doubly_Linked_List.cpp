/*
    Link : https://www.naukri.com/code360/problems/reverse-a-doubly-linked-list_1116098?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM
*/

Node* reverseDLL(Node* head)
{   
    if(head==NULL or head->next==NULL){
        return head;
    } 

    Node* prev = NULL;
    Node* current = head;

    while(current!=NULL){
        prev = current->prev;
        current->prev = current->next;
        current->next = prev;

        current = current->prev;
    }
    return prev->prev;
}