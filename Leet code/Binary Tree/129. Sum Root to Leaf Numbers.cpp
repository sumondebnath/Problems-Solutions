/*
    https://leetcode.com/problems/sum-root-to-leaf-numbers/description/?envType=problem-list-v2&envId=tree
*/

class Solution {
public:
    int Dfs(TreeNode* root, int num){
        
        if(root == NULL) return 0;

        num = num * 10 + root->val; 

        if(root->left==NULL && root->right==NULL){
            return num;
        }
        
        return Dfs(root->left, num) + Dfs(root->right, num);
    }
    int sumNumbers(TreeNode* root) {
        int num = 0;
        return Dfs(root, num);
    }
};