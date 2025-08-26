#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int res = min(abs(s-arr[0]), abs(s-arr[n-1])) + arr[n-1] - arr[0];

        cout<<res<<endl;
    }

    return 0;
}