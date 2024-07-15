
#include <bits/stdc++.h>
using namespace std;

/*
    Problem Link :
        https://www.naukri.com/code360/problems/check-armstrong_589?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
*/

bool checkArmstrong(int n)
{
    // Write your code here
    int temp = n;
    int count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    temp = n;
    int val = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        temp /= 10;

        val = val + pow(rem, count);
    }

    return val == n;
}












int main()
{

    return 0;
}