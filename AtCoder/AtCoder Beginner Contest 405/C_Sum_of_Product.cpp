#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    long long sum = 0;
    long long product = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
        product += arr[i] * arr[i];
    }

    cout<<(sum * sum-product)/2<<endl;

    return 0;
}