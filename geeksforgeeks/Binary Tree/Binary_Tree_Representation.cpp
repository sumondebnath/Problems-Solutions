/*
    Problem Link : https://www.geeksforgeeks.org/problems/binary-tree-representation/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-tree-representation
*/

class Solution
{
public:
    void create_tree(node *root0, vector<int> &vec)
    {
        // Your code goes here
        root0->data = vec[0];

        node *a = newNode(vec[1]);
        root0->left = a;

        node *b = newNode(vec[2]);
        root0->right = b;

        node *c = newNode(vec[3]);
        a->left = c;

        node *d = newNode(vec[4]);
        a->right = d;

        node *e = newNode(vec[5]);
        b->left = e;

        node *f = newNode(vec[6]);
        b->right = f;
    }
};