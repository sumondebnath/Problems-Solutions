#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    vector<int>arr1(n), arr2(m), arr;

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    int i=0, j=0;

    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            arr.push_back(arr1[i]);
            i++;
        }
        else {
            arr.push_back(arr2[j]);
            j++;
        }
    }

    while(i<n){
        arr.push_back(arr1[i]);
        i++;
    }

    while(j<m){
        arr.push_back(arr2[j]);
        j++;
    }

    for(int k=0; k<arr.size(); k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}