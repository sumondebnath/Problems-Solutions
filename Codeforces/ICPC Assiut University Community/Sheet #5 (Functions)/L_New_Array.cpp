#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>a, vector<int>b, int n){
    vector<int>c;

    for(int val : b){
        c.push_back(val);
    }
    for(int val : a){
        c.push_back(val);
    }

    for(int val : c){
        cout<<val<<" ";
    }
}

int main(){

    int n; cin>>n;
    vector<int>a(n);
    vector<int>b(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    solve(a, b, n);

    return 0;
}