#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;
    int maxi = arr[0];
    int mini = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            count++;
        }
        if(arr[i] < mini){
            mini = arr[i];
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}