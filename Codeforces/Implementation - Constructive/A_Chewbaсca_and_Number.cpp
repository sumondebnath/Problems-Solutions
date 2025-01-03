#include<bits/stdc++.h>
using namespace std;

int main(){

    string s; cin>>s;

    for(int i=0; i<size(s); i++){
        char ch = s[i];
        if(i==0 && ch>='5' && ch<'9') s[i] = '9'-ch+'0';
        else if (i>0 && ch>='5') s[i] = '9'-ch+'0';
    }

    cout<<s<<endl;

    return 0;
}