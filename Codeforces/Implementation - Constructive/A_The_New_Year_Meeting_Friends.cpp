#include<bits/stdc++.h>
using namespace std;

int main(){

    int x1, x2, x3;
    cin>>x1>>x2>>x3;

    int maxi = max(x1, max(x2, x3));
    int mini = min(x1, min(x2, x3));

    cout<<maxi-mini<<endl;

    return 0;
}