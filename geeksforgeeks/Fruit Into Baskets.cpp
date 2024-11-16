/*
    Problem Link : https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1
*/

class Solution
{
public:
    int totalFruits(vector<int> &arr)
    {
        int maxlen = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            set<int> st;
            for (int j = i; j < n; j++)
            {
                st.insert(arr[j]);
                if (st.size() <= 2)
                {
                    maxlen = max(maxlen, j - i + 1);
                }
                else
                {
                    break;
                }
            }
        }
        return maxlen;
    }
};