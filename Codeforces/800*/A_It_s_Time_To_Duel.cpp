#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        if(accumulate(arr.begin(), arr.end(), 0) == n) {
            cout<<"YES"<<endl;
            return;
        }

        for(int i=0; i<n-1; i++){
            if(!arr[i] && !arr[i+1]) {
            cout<<"YES"<<endl;
            return;
            }
        }

        cout<<"NO"<<endl;
}

int main(){

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}