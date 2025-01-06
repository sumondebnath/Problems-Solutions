#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>arr(n);
    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(i==arr[j]) v[i-1] = j+1; 
        }
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}