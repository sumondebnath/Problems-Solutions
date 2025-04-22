#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int sum = 0;
    
    string str; cin>>str;

    for(int i=0; i<n; i++){
        sum += str[i] - '0';
    }

    cout<<sum<<endl;

    return 0;
}