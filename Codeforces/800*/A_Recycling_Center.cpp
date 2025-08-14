#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;
        vector<long long>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end(), greater<long long>());

        int count = 0;

        for(long long val : arr){
            if(val * (1LL << count) <= c) count++;
        }

        cout<<n-count<<endl;
    }

    return 0;
}