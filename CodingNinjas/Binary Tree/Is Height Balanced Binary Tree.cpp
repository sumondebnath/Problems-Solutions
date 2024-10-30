/*
    Problem Link : https://www.naukri.com/code360/problems/is-height-balanced-binary-tree_975497?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

int FindHeight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    int left = FindHeight(root->left);
    if (left == -1)
        return -1;
    int right = FindHeight(root->right);
    if (right == -1)
        return -1;

    if (abs(left - right) > 1)
        return -1;

    return max(left, right) + 1;
}
bool isBalancedBT(TreeNode<int> *root)
{

    return FindHeight(root) != -1;
}