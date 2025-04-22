#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>arr(n);
    map<int, int>mp;
    int mini = INT_MAX;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
        mini = min(mini, arr[i]);
    }

    if(mp[mini]%2 == 0) cout<<"Unlucky"<<endl;
    else cout<<"Lucky"<<endl;

    return 0;
}