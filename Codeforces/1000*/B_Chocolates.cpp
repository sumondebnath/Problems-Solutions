#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long maxi = arr[n - 1]-1;
    long long sum = arr[n-1];

    for (int i = n - 2; i >= 0; i--)
    {
        if(maxi <= 0) break;
        sum += min(maxi, (long long)arr[i]);
        maxi = min(maxi, (long long)arr[i])-1;
    }

    cout << sum << endl;

    return 0;
}