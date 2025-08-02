#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<int>a = arr;

        sort(a.begin(), a.end());

        if(a == arr || k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

    return 0;
}