#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<vector<int>>arr(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) sum += arr[i][j];
            else if(i == n-j-1) sum += arr[i][j];
            else if(i==(n-1)/2) sum += arr[i][j];
            else if(j==(n-1)/2) sum += arr[i][j];
        }
    }

    cout<<sum<<endl;

    return 0;
}