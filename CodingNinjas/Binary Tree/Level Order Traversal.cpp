/*
    Problem Link : https://www.naukri.com/code360/problems/zigzag-binary-tree-traversal_920532?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

vector<int> levelOrder(TreeNode<int> *root)
{
    vector<int> v;
    if (root == NULL)
        return v;

    queue<TreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode<int> *parent = q.front();
        q.pop();

        v.push_back(parent->data);

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }

    return v;
}
