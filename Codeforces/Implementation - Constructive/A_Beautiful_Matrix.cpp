#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=5;
    int arr[n][n];
    int r, c;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }
    cout<<abs(2-r) + abs(2-c)<<endl;

    return 0;
}