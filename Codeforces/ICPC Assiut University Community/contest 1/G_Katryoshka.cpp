#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n, m, k;
    cin>>n>>m>>k;

    if(n==0 || k==0) cout<<0<<endl;
    else{
        long long res=0;
        long long mini = min({n, m, k});
        res += mini;
        n-=mini;
        m-=mini;
        k-=mini;
        mini = min(n/2, k);
        res+=mini;

        cout<<res<<endl;
    }

    return 0;
}