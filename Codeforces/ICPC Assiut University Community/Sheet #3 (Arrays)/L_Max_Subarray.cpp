#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        vector<int>v;

        for(int i=0; i<n; i++){
            int maxi = arr[i];
            v.push_back(maxi);
            for(int j=i+1; j<n; j++){
                maxi = max(maxi, arr[j]);
                v.push_back(maxi);
            }
            
        }

        for(int val : v) cout<<val<<" ";
        cout<<endl;
    }

    return 0;
}
