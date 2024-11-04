/*
    Problem Link : https://www.naukri.com/code360/problems/symmetric-tree_981177?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

bool SymmetricOrNot(TreeNode<int> *left, TreeNode<int> *right)
{
    if (left == NULL or right == NULL)
        return left == right;
    if (left->data != right->data)
        return false;

    return SymmetricOrNot(left->left, right->right) and SymmetricOrNot(left->right, right->left);
}

bool isSymmetric(TreeNode<int> *root)
{
    return root == NULL or SymmetricOrNot(root->left, root->right);
}