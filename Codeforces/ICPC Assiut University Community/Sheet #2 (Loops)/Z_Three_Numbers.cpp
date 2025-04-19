#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, s;
    cin >> k >> s;

    int count = 0;

    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            int x = s - i - j;
            if (x >= 0 && x <= k) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}