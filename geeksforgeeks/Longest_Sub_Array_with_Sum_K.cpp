/*
    Problem Link : https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k
*/

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        map<int, int> prefix;
        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < N; i++)
        {
            sum += A[i];
            if (sum == K)
            {
                maxLen = max(maxLen, i + 1);
            }
            int remain = sum - K;
            if (prefix.find(remain) != prefix.end())
            {
                int len = i - prefix[remain];
                maxLen = max(maxLen, len);
            }
            if (prefix.find(sum) == prefix.end())
            {
                prefix[sum] = i;
            }
        }
        return maxLen;
    }
};