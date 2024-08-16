/*
    Problem Link : https://www.naukri.com/code360/problems/alternate-numbers_6783445?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
*/

vector<int> alternateNumbers(vector<int> &a)
{
    // Write your code here.
    vector<int> v;
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 0)
        {
            v1.push_back(a[i]);
        }
        else
        {
            v2.push_back(a[i]);
        }
    }

    if (v1.size() > v2.size())
    {
        for (int i = 0; i < v2.size(); i++)
        {
            v.push_back(v1[i]);
            v.push_back(v2[i]);
        }
        for (int i = v2.size(); i < v1.size(); i++)
        {
            v.push_back(v1[i]);
        }
    }
    else
    {
        for (int i = 0; i < v1.size(); i++)
        {
            v.push_back(v1[i]);
            v.push_back(v2[i]);
        }
        for (int i = v1.size(); i < v2.size(); i++)
        {
            v.push_back(v2[i]);
        }
    }

    return v;
}