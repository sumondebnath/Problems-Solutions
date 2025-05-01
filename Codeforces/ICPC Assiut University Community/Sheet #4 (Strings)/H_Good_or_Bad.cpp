#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        char ch = s[0];
        bool flag = true;

        for(int i=0; i<s.length()-1; i++){
            if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')){
                flag = false;
                break;
            }
            else{
                flag = true;
            }
        }

        if(flag==false) cout<<"Good"<<endl;
        else cout<<"Bad"<<endl;
    }

    return 0;
}