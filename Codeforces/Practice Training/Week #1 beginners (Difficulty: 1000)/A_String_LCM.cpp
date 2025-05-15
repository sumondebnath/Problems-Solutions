#include<bits/stdc++.h>
using namespace std;


string getBase(const string &s) {
    int n = s.length();
    for (int len = 1; len <= n; ++len) {
        if (n % len != 0) continue;
        string base = s.substr(0, len);
        bool valid = true;
        for (int i = len; i < n; i += len) {
            if (s.substr(i, len) != base) {
                valid = false;
                break;
            }
        }
        if (valid) {
            return base;
        }
    }
    return s;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        string base_s = getBase(s);
        string base_t = getBase(t);
        if (base_s != base_t) {
            cout << -1 << endl;
            continue;
        }
        int len_base = base_s.length();
        int x = s.length() / len_base;
        int y = t.length() / len_base;
        int lcm_xy = (x * y) / __gcd(x, y);
        string result;
        for (int i = 0; i < lcm_xy; ++i) {
            result += base_s;
        }
        cout << result << endl;
    }
    return 0;
}