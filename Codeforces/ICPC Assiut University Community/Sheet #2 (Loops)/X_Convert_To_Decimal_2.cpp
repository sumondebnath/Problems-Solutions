#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int count = 0;

        while(n>0){
            int rem = n%2;
            n /= 2;

            if(rem == 1) count++;
        }

        int result = 0;
        for (int i = 0; i < count; i++) {
            result = (result << 1) | 1;
        }

        cout<<result<<endl;
    }

    return 0;
}