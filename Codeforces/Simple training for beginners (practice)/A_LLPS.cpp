#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    string s;
    char ch = str[0];

    for(int i=1; i<str.length(); i++){
        ch = max(ch, str[i]);
    }
    for(int i=0; i<str.length(); i++){
        if(str[i] == ch) s += str[i];
    }

    cout<<s<<endl;

    return 0;
}