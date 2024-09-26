/*
    Link : https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM
*/

Node *sortList(Node *head)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    Node *temp = head;
    while (temp != NULL)
    {
        pq.push(temp->data);
        temp = temp->next;
    }
    temp = head;

    while (temp != NULL and !pq.empty())
    {
        temp->data = pq.top();
        pq.pop();
        temp = temp->next;
    }

    return head;
}