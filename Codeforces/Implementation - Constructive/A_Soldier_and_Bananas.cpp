#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, n,w;
    cin>>k>>n>>w;
    int price = 0;

    for(int i=1; i<=w; i++){
        price += i*k;
    }
    price = price-n;
    if(price<0) cout<<0<<endl;
    else cout<<price<<endl;

    return 0;
}