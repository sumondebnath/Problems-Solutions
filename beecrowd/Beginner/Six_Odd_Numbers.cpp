#include<bits/stdc++.h>
using namespace std;

int main(){

    int x; cin>>x;
    int six = 0;
    while(six != 6){
        if(x%2 != 0) {
            cout<<x<<endl;
            six++;
        }
        x++;
        
    }

    return 0;
}