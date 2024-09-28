/*
    Link : https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=add-1-to-a-number-represented-as-linked-list
*/

class Solution
{
public:
    void ReverseLL(Node *&head, Node *curr)
    {
        if (curr->next == NULL)
        {
            head = curr;
            return;
        }
        ReverseLL(head, curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    }

    Node *addOne(Node *head)
    {
        ReverseLL(head, head);
        Node *temp = head;
        int carry = 1;
        while (temp != NULL)
        {
            temp->data += carry;
            if (temp->data < 10)
            {
                carry = 0;
                break;
            }
            else
            {
                temp->data = 0;
                carry = 1;
            }
            temp = temp->next;
        }

        if (carry == 1)
        {
            ReverseLL(head, head);
            Node *newNode = new Node(carry);
            newNode->next = head;
            head = newNode;
            return head;
        }
        ReverseLL(head, head);
        return head;
    }
};