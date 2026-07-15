class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> v;
        stack<TreeNode *> st;

        TreeNode *curr = root;

        while (curr != NULL or !st.empty())
        {
            if (curr != NULL)
            {
                st.push(curr);
                curr = curr->left;
            }
            else
            {
                TreeNode *temp = st.top()->right;
                if (temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    v.push_back(temp->val);

                    while (!st.empty() and temp == st.top()->right)
                    {
                        temp = st.top();
                        st.pop();
                        v.push_back(temp->val);
                    }
                }
                else
                {
                    curr = temp;
                }
            }
        }

        return v;
    }
};