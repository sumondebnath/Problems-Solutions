/*
    Problem Link : https://leetcode.com/problems/binary-tree-paths/description/
*/

class Solution
{
public:
    void getAllPath(TreeNode *root, vector<string> &v, string str)
    {
        if (root == NULL)
            return;

        str += to_string(root->val);

        if (!root->left and !root->right)
        {
            v.push_back(str);
        }
        else
        {
            str += "->";
            getAllPath(root->left, v, str);
            getAllPath(root->right, v, str);
        }
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> v;
        string str;
        if (root == NULL)
            return v;

        getAllPath(root, v, str);

        return v;
    }
};