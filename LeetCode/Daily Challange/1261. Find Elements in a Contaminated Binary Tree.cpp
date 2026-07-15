/*
    https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/description/
*/

class FindElements {
    public:
        set<int>track;
        void dfs(TreeNode* currNode, int currVal){
            if(!currNode) return;
            track.insert(currVal);
            dfs(currNode->left, currVal*2+1);
            dfs(currNode->right, currVal*2+2);
        }
        FindElements(TreeNode* root) {
            dfs(root, 0);
        }
        
        bool find(int target) {
            return track.count(target) > 0;
        }
    };