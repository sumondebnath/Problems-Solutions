/*
    Problem Link : https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=root-to-leaf-paths
*/

class Solution
{
public:
    void GetAllNode(Node *root, vector<vector<int>> &v, vector<int> &arr)
    {
        if (!root)
            return;

        arr.push_back(root->data);
        if (root->left == NULL and root->right == NULL)
        {
            v.push_back(arr);
        }
        else
        {
            GetAllNode(root->left, v, arr);
            GetAllNode(root->right, v, arr);
        }
        arr.pop_back();
    }
    vector<vector<int>> Paths(Node *root)
    {
        vector<vector<int>> v;
        vector<int> arr;
        if (root == NULL)
            return v;

        GetAllNode(root, v, arr);

        return v;
    }
};