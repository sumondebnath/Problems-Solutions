#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        long long n, s;
        cin>>n>>s;

        vector<long long> result;
        long long sum = 0;

        for (long long i = n; i >= 1; --i) {
            if (sum + i <= s) {
                result.push_back(i);
                sum += i;
            }
            if (sum == s) break;
        }

        if (sum != s) {
            cout << -1 << endl;
        } else {
            for (long long x : result)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}