#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<char>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int r=0;
    int l = 1;
    string str;
    while(r<n){
        str += arr[r];
        r+= l++;
    }

    cout<<str<<endl;

    return 0;
}