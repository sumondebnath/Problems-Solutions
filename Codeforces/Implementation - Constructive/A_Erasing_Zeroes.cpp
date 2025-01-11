#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        string str;
        cin>>str;
        int l=0, r=str.length()-1;

        while(l<=r){
            if(str[l]!='1'){
                l++;
            }
            if(str[r]!='1'){
                r--;
            }
            if(str[l]=='1' && str[r]=='1'){
                break;
            }
        }
        int count=0;
        for(int i=l; i<=r; i++){
            if(str[i]=='0') count++;
        }

        cout<<count<<endl;
    }

    return 0;
}