#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        int r=0, d=0;

        for(int i=0; i<n-1; i++){
            if(arr[i][m-1] != 'D') d++;
        }
        for(int i=0; i<m-1; i++){
            if(arr[n-1][i] != 'R') r++;
        }

        cout<<r+d<<endl;
    }

    return 0;
}