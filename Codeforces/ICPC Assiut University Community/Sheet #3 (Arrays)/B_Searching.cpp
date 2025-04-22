#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x; cin>>x;
    // bool found = false;
    int idx = -1;

    for(int i=0; i<n; i++){
        if(arr[i] == x) {
            // found = true;
            idx = i;
            break;
        }
    }

    cout<<idx<<endl;



    return 0;
}