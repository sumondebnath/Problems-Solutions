/*
    Link : https://www.naukri.com/code360/problems/add-two-numbers_1170520?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=PROBLEM
*/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *dummy = new Node(-1);
    Node *temp1 = num1;
    Node *temp2 = num2;
    Node *curr = dummy;
    int carry = 0;

    while (temp1 != NULL || temp2 != NULL)
    {
        int sum = carry;

        if (temp1)
            sum += temp1->data;
        if (temp2)
            sum += temp2->data;

        Node *newNode = new Node(sum % 10);
        carry = sum / 10;

        curr->next = newNode;
        curr = newNode;

        if (temp1)
            temp1 = temp1->next;
        if (temp2)
            temp2 = temp2->next;
    }

    if (carry)
    {
        Node *newNode = new Node(carry);
        curr->next = newNode;
    }

    return dummy->next;
}