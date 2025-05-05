#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int t = x%n;
    while(t--){
        int temp = arr.back();
        arr.pop_back();
        reverse(arr.begin(), arr.end());
        arr.push_back(temp);
        reverse(arr.begin(), arr.end());
    }

    for(auto val : arr){
        cout<<val<<" ";
    }

    return 0;
}