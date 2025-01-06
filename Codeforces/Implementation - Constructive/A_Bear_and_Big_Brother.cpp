#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;
    int step = 0;
    while(a<b){
        a*= 3;
        b*=2;
        step++;
    }
    if(a<=b) cout<<step+1<<endl;
    else cout<<step<<endl;

    return 0;
}