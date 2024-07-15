/*
    problem Link : https://www.naukri.com/code360/problems/print-all-divisors-of-a-number_1164188?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
*/

int *printDivisors(int n, int &size)
{
    // Write your code here
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }

    size = v.size();
    int *val = new int[v.size()];

    for (int i = 0; i < v.size(); i++)
    {
        val[i] = v[i];
    }
    return val;
}
