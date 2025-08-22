#include<bits/stdc++.h>
using namespace std;

int solve(int x){
    int mini = INT_MAX;

    while(x != 0){
        mini = min(mini, x%10);
        x /= 10;
    }

    return mini;
}

int main(){

    int t; cin>>t;
    while(t--){
        int x; cin>>x;

        cout<<solve(x)<<endl;
    }

    return 0;
}