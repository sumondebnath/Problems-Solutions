#include<bits/stdc++.h>
using namespace std;

int main(){

    int r, x;
    cin>>r>>x;

    if(r>=1600 && r<3000 && x==1) cout<<"Yes"<<endl;
    else if(r>=1200 && r<2400 && x==2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}