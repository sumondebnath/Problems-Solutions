#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n; cin>>n;
    bool flag = false;

    for(int i=0; i<=70; i++){
        if(pow(2, i) == n){
            flag = true;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}