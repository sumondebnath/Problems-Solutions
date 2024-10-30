/*
    Problem Link : https://www.naukri.com/code360/problems/tree-traversal_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

vector<vector<int>> v;

void PreOrder(TreeNode* root, vector<int>&arr){
    if(root==NULL) return;
    arr.push_back(root->data);
    PreOrder(root->left, arr);
    PreOrder(root->right, arr);
}

void PostOrder(TreeNode* root, vector<int>&arr){
    if(root==NULL) return;
    
    PostOrder(root->left, arr);
    PostOrder(root->right, arr);
    arr.push_back(root->data);
}

void InOrder(TreeNode* root, vector<int>&arr){
    if(root==NULL) return;
    
    InOrder(root->left, arr);
    arr.push_back(root->data);
    InOrder(root->right, arr);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<int>tra_val;

    InOrder(root, tra_val);
    v.push_back(tra_val);
    tra_val.clear();

    PreOrder(root, tra_val);
    v.push_back(tra_val);
    tra_val.clear();

    PostOrder(root, tra_val);
    v.push_back(tra_val);
    tra_val.clear();

    return v;
}