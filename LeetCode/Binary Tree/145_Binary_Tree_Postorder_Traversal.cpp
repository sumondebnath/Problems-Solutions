/*
    Problem Link : https://leetcode.com/problems/binary-tree-postorder-traversal/description/
*/

class Solution
{
public:
    void PostOrder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        PostOrder(root->left, v);
        PostOrder(root->right, v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> v;

        PostOrder(root, v);

        return v;
    }
};