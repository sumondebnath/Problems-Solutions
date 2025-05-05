#include<bits/stdc++.h>
using namespace std;

void shiftZero(vector<int>&arr, int n){
    int zero = 0;
    vector<int>v;
    for(int i=0; i<n; i++){
        if(arr[i]!= 0) v.push_back(arr[i]);
        else zero++;
    }

    while(zero--){
        v.push_back(0);
    }

    for(int val : v){
        cout<<val<<" ";
    }
}

int main(){

    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    shiftZero(arr, n);

    return 0;
}