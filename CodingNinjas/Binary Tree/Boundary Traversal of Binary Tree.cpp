/*
    Problem Link : https://www.naukri.com/code360/problems/boundary-traversal-of-binary-tree_790725?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

bool isLeaf(TreeNode<int> *root)
{
    return !root->left and !root->right;
}

void LeftSide(TreeNode<int> *root, vector<int> &arr)
{
    TreeNode<int> *curr = root->left;
    while (curr)
    {
        if (!isLeaf(curr))
            arr.push_back(curr->data);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void LeafSide(TreeNode<int> *root, vector<int> &arr)
{
    if (!root)
        return;
    if (isLeaf(root))
    {
        arr.push_back(root->data);
        return;
    }
    LeafSide(root->left, arr);
    LeafSide(root->right, arr);
}

void RightSide(TreeNode<int> *root, vector<int> &arr)
{
    vector<int> temp;
    TreeNode<int> *curr = root->right;
    while (curr)
    {
        if (!isLeaf(curr))
            temp.push_back(curr->data);
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }

    for (int i = temp.size() - 1; i >= 0; i--)
    {
        arr.push_back(temp[i]);
    }
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
    vector<int> arr;
    if (!root)
        return arr;
    if (!isLeaf(root))
        arr.push_back(root->data);

    LeftSide(root, arr);
    LeafSide(root, arr);
    RightSide(root, arr);

    return arr;
}
