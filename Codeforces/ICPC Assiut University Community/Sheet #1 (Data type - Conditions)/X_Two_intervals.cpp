#include<bits/stdc++.h>
using namespace std;

int main(){

    int l1, r1, l2, r2;
    cin>>l1>>r1>>l2>>r2;

    int first = max(l1, l2);
    int second = min(r1, r2);

    if(first<=second) cout<<first<<" "<<second<<endl;
    else cout<<-1<<endl;

    return 0;
}