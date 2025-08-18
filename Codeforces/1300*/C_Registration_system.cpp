#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    map<string, int> mp;

    while (t--)
    {
        string str;
        cin >> str;

        if (mp[str])
        {
            cout << str << mp[str] << endl;
            mp[str]++;
        }
        else
        {
            cout << "OK" << endl;
            mp[str]++;
        }
    }

    return 0;
}