#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>arr, int l, int r){
    for(int k=l; k<r; k++){
        if(arr[k] > arr[k+1]){
            return false;
        }
    }
    return true;
}

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int count = 0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                
                if(solve(arr, i, j)) count++;
            }
        }
        // if(n>0 && count==0) cout<<count+1<<endl;
        cout<<count<<endl;
    }

    return 0;
}