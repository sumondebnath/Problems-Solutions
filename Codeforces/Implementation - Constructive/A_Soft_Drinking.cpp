#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int first_tost = min((k*l/nl), (c*d));
    int second_tost = min(first_tost, (p/np));

    cout<<second_tost/n<<endl;

    return 0;
}