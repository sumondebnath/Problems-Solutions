#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    vector<int>a(n), b(m);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    for(int val : b){
        auto it = lower_bound(a.begin(), a.end(), val);
        cout<<it-a.begin()<<" ";
    }

    return 0;
}