#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int w, h;
        cin>>w>>h;

        if(h%w==0) cout<<"Square"<<endl;
        else cout<<"Rectangle"<<endl;
    }

    return 0;
}