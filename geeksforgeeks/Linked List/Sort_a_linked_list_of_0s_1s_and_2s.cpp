/*
    Link : https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=given-a-linked-list-of-0s-1s-and-2s-sort-it
*/

class Solution
{
public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node *segregate(Node *head)
    {

        // Add code here
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
};