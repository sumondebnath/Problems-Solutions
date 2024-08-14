/*
    Problem Link : https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_5713505?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&count=25&page=1&search=&sort_entity=order&sort_order=ASC
*/

#include <bits/stdc++.h> 
using namespace std;
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    map<long long, int> prefixSum;
    long long sum = 0;
    int maxLen = 0;

    for(int i=0; i<nums.size(); i++) {
        sum += nums[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum-k;

        if(prefixSum.find(rem) != prefixSum.end()){
            int len = i - prefixSum[rem];
            maxLen = max(maxLen, len);
        }
        if(prefixSum.find(sum) == prefixSum.end()){
            prefixSum[sum] = i;
        }
    }
    return maxLen;
}