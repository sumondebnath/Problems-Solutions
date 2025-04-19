#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    int count = 0;

    while(n--){
        for(int i=1; i<=3; i++){
            count++;
            cout<<count<<" ";
        }
        count++;
        cout<<"PUM"<<endl;
    }

    return 0;
}