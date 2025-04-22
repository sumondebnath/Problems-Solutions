#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int mini = INT_MAX;
    int idx = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] < mini) {
            mini = arr[i];
            idx = i;
        }
    }

    cout<<mini<<" "<<idx+1<<endl;

    return 0;
}