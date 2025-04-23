#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>arr(n);

    int mini = INT_MAX, maxi = INT_MIN;
    int minIdx=0, maxIdx=0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] < mini){
            mini = arr[i];
            minIdx = i;
        }
        if(arr[i] > maxi){
            maxi = arr[i];
            maxIdx = i;
        }
    }

    arr[minIdx] = maxi;
    arr[maxIdx] = mini;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    


    return 0;
}