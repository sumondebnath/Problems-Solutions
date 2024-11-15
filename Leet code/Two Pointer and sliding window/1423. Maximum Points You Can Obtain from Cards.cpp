/*
    Problem Link : https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
*/

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int i = 0, j = cardPoints.size() - 1;
        int firstSum = 0, lastSum = 0;

        for (int i = 0; i <= k - 1; i++)
        {
            firstSum += cardPoints[i];
        }

        int maxSum = firstSum;

        for (int i = k - 1; i >= 0; i--)
        {
            firstSum -= cardPoints[i];
            lastSum += cardPoints[j];
            j--;

            maxSum = max(maxSum, firstSum + lastSum);
        }

        return maxSum;
    }
};