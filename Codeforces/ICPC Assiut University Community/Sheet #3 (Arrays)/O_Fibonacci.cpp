#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<long long> fib;
    fib.push_back(0);
    fib.push_back(0);
    fib.push_back(1);

    // fib[1 = 0;
    // fib[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    cout << fib[n] << endl;

    return 0;
}
