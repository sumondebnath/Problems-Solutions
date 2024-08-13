/*
    Problem Link ; https://www.naukri.com/code360/problems/missing-number_6680467?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&count=25&page=48&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
*/

int missingNumber(vector<int> &a, int N)
{
    // Write your code here.
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < N - 1; i++)
    {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i + 1);
    }

    xor1 = xor1 ^ N;

    return xor1 ^ xor2;
}