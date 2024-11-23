/*
    https://www.naukri.com/code360/problems/subarray-sums-i_1467103?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
*/

int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    // Write Your Code Here
    int prefix = 0, count = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        prefix += arr[i];
        int remove = prefix - k;
        count += mp[remove];
        mp[prefix]++;
    }
    return count;
}