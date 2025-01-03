#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int maxidx, minidx;
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > maxi)
        {
            maxi = a;
            maxidx = i;
        }
        if (a <= mini)
        {
            mini = a;
            minidx = i;
        }
    }
    if (maxidx > minidx)
    {
        cout << (maxidx - 1) + (n - minidx) - 1 << endl;
    }
    else
    {
        cout << (maxidx - 1) + (n - minidx) << endl;
    }

    return 0;
}