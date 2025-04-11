#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, p;
    cin >> x >> p;

    double res = p / (1 - x / 100.0);

    cout << fixed << setprecision(2) << res << endl;

    return 0;
}