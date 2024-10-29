/*
    Problem Link : https://leetcode.com/problems/binary-tree-inorder-traversal/description/
*/

class Solution
{
public:
    void InOrder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
        {
            return;
        }
        InOrder(root->left, v);
        v.push_back(root->val);
        InOrder(root->right, v);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;

        InOrder(root, v);

        return v;
    }
};