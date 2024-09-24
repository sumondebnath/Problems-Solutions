/*
    Link : https://www.naukri.com/code360/problems/delete-middle-node_763267?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM
*/

Node *deleteMiddle(Node *head)
{
    // Write your code here.
    if (head == NULL or head->next == NULL)
        return NULL;
    Node *slow = head;
    Node *fast = head->next->next;

    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = slow->next->next;

    return head;
}
