#include<bits/stdc++.h>
using namespace std;

int main(){

    long long a, b, c, d;
    cin>>a>>b>>c>>d;

    double ex1 = b * log(a);
    double ex2 = d * log(c);

    if(ex1 > ex2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}