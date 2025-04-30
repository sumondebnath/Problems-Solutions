#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n = s.length();

        if(n>10){
            string t;
            t+= s[0] + to_string(n-2) + s[n-1];
            cout<<t<<endl;

        }
        else{
            cout<<s<<endl;
        }
    }

    return 0;
}