#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int odd = 0, even = 0;
        int sum = 0;
        while(n--){
            int a; cin>>a;
            sum += a;
            if(a%2==0) even++;
            else odd++;
        }

        if(sum%2 == 1) cout<<"YES"<<endl;
        else{
            if(odd>=1 && even >= 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}