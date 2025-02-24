#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int count = 0;
    for (int a = 0; a <= sqrt(n); ++a) {
        for (int b = 0; b <= sqrt(m); ++b) {
            if (a * a + b == n && a + b * b == m) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}