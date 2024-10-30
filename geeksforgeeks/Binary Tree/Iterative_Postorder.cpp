/*
    Problem Link : https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postorder-traversal-iterative
*/

class Solution
{
public:
    vector<int> postOrder(Node *node)
    {
        vector<int> v;
        stack<Node *> st;

        Node *curr = node;

        while (curr != NULL or !st.empty())
        {
            if (curr != NULL)
            {
                st.push(curr);
                curr = curr->left;
            }
            else
            {
                Node *temp = st.top()->right;
                if (temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    v.push_back(temp->data);

                    while (!st.empty() and temp == st.top()->right)
                    {
                        temp = st.top();
                        st.pop();
                        v.push_back(temp->data);
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