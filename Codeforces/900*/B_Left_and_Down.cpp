#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    while(b != 0){
        long long temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main(){

    int t; cin>>t;

    while(t--){
        long long a, b, k;
        cin>>a>>b>>k;

        long long res = gcd(a, b);

        if(a / res <= k && b/ res<=k) cout<<1<<endl;
        else cout<<2<<endl;
    }

    return 0;
}