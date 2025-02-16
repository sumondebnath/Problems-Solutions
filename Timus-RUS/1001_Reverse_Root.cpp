#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int a;
    vector<long long> arr;
    while(cin>>a){
        arr.push_back(a);
    }

    reverse(arr.begin(), arr.end());
    cout<<fixed<<setprecision(4);
    for(long long val : arr){
        cout<<sqrt(val)<<endl;
    }

    return 0;
}