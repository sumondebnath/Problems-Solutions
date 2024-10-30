/*
    Problem Link : https://www.naukri.com/code360/problems/maximum-sum-path-of-a-binary-tree._1214968?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

int MaxSum(BinaryTreeNode<int> *root, int &sum){
    if(root==NULL) return 0;

    int left = max(0, MaxSum(root->left, sum));
    int right = max(0, MaxSum(root->right, sum));

    sum = max(sum, left+right+root->data);

    return max(left, right) + root->data;
}

int maxPathSum(BinaryTreeNode<int> *root)
{
    int sum = INT_MIN;

    MaxSum(root, sum);

    return sum;
}