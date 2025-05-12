#include<bits/stdc++.h>
using namespace std;

int main(){

    string s; cin>>s;

    int up=0, low=0;

    for(char ch : s){
        if(ch>='A' && ch<='Z') up++;
        else low++;
    }

    if(up>low){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }

    return 0;
}