#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int count = x;
        int ex = 10;
        vector<int> v;

        while (x != 0)
        {
            if (x % ex != 0)
            {
                v.push_back(x % ex);
            }
            x -= x % ex;
            ex *= 10;
        }
        cout << v.size() << endl;
        for (int val : v)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}