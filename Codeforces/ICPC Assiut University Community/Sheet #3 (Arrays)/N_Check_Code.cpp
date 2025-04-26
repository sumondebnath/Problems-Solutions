#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    string s; cin>>s;
    int flag = true;

    if(s.length() != a+b+1) flag = false;
    if(flag && s[a] != '-') flag = false;

    for (int i = 0; i < s.length() && flag; i++) {
        if (i != a) {
            if (!isdigit(s[i])) {
                flag = false;
            }
        }
    }

    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}