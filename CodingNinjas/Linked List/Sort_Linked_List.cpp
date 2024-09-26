/*
    Link : https://www.naukri.com/code360/problems/sort-linked-list_920517?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

Node *FindMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *MergeSort(Node *list1, Node *list2)
{
    Node *dummy = new Node(-1);
    Node *temp = dummy;

    while (list1 != NULL and list2 != NULL)
    {
        if (list1->data < list2->data)
        {
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else
        {
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
    }
    if (list1)
        temp->next = list1;
    else
        temp->next = list2;

    return dummy->next;
}

Node *sortLL(Node *head)
{
    if (head == NULL or head->next == NULL)
        return head;

    Node *middle = FindMiddle(head);
    Node *left = head;
    Node *right = middle->next;
    middle->next = NULL;

    left = sortLL(left);
    right = sortLL(right);

    return MergeSort(left, right);
}