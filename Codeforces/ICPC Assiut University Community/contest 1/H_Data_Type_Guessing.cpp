#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, k, a;
    cin >> n >> k >> a;

    __int128 num = (__int128)n * k;
    if (num % a != 0) {
        cout << "double" << endl;
    } else {
        long long result = num / a;
        if (result <= INT_MAX) {
            cout << "int" << endl;
        } else {
            cout << "long long" << endl;
        }
    }

    return 0;
}