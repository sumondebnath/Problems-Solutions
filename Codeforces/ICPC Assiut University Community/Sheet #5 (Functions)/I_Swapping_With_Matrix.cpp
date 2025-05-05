#include<bits/stdc++.h>
using namespace std;

void row(vector<vector<int>>&arr, int x, int y){
    swap(arr[x-1], arr[y-1]);
}

void cols(vector<vector<int>>&arr, int x, int y){
    int n = arr.size();
    for(int i=0; i<n; i++){
        swap(arr[i][x-1], arr[i][y-1]);
    }
}

int main(){

    int n, x, y;
    cin>>n>>x>>y;
    vector<vector<int>>arr(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    row(arr, x, y);
    cols(arr, x, y);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}