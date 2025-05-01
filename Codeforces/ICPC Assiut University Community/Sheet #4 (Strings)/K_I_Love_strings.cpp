#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    while(n--){
        string s, t;
        cin>>s>>t;

        int i=0, j=0;
        string str;

        while(i<s.length() && j<t.length()){
            str+=s[i];
            str+=t[j];
            i++;
            j++;
        }

        while(i<s.length()){
            str+=s[i];
            i++;
        }

        while(j<t.length()){
            str+=t[j];
            j++;
        }


        cout<<str<<endl;
    }

    return 0;
}