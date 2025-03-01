#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>arr(7);
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    int i=0;
    while(n>0){
        n -= arr[i];
        if(n<=0) break;
        i++;
        i %=7;
    }

    cout<<i+1<<endl;

    return 0;
}