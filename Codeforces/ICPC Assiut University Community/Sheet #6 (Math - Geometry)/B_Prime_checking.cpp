#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n; cin>>n;

    int x = sqrt(n);

    if(n%2!=0 && n%3!=0 && n%x!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}