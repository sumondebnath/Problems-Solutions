#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int countOne=0, countZero=0;

    while(n--){
        int x; cin>>x;
        if(x==1) countOne++;
        else countZero++;
    }

    if(countOne>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

    return 0;
}