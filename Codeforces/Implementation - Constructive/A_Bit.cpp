#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    int output = 0;

    while(t--){
        string str; cin>>str;

        if(str == "++X" || str=="X++") output++;
        else output--;
    }

    cout<<output<<endl;

    return 0;
}