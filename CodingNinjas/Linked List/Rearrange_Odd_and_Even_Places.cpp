/*
    Link : https://www.naukri.com/code360/problems/rearrange-odd-and-even-places_920379?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM
*/

Node* oddEvenList(Node* head)
{
	if(head==NULL or head->next==NULL) return head;
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while(even!=NULL and even->next!=NULL){
        odd->next = odd->next->next;
        odd = odd->next;
        even->next = even->next->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
}