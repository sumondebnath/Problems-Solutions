#include<bits/stdc++.h>
using namespace std;

int main(){

    string str; cin>>str;
    string s = str;

    reverse(str.begin(), str.end());

    int i=0;
    while(i<str.size()){
        if(str[i] != '0') break;
        i++;
    }

    str.erase(str.begin(), str.begin()+i);

    cout<<str<<endl;
    if(str==s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}