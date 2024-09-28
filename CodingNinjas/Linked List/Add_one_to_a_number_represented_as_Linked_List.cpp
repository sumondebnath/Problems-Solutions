/*
    Link : https://www.naukri.com/code360/problems/add-one-to-a-number-represented-as-linked-list_920557?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM
*/

int ADDONE(Node *&head)
{
    if (head == NULL)
    {
        return 1;
    }
    int carry = ADDONE(head->next);
    head->data += carry;
    if (head->data < 10)
    {
        return 0;
    }
    else
    {
        head->data = 0;
        return 1;
    }
}

Node *addOne(Node *head)
{
    int carry = ADDONE(head);
    if (carry == 1)
    {
        Node *newNode = new Node(carry);
        newNode->next = head;
        head = newNode;
        return head;
    }
    return head;
}