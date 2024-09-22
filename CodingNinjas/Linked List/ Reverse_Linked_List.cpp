/*
    Link : https://www.naukri.com/code360/problems/reverse-linked-list_920513?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM
*/

void List(Node *&head, Node *current)
{
    if (current->next == NULL)
    {
        head = current;
        return;
    }
    List(head, current->next);
    current->next->next = current;
    current->next = NULL;
}

Node *reverseLinkedList(Node *head)
{
    // Write your code here
    if (head == NULL or head->next == NULL)
        return head;

    List(head, head);

    return head;
}
