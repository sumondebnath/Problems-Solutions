#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;  

    int ans = (a*b*c*d)%100;
    
    if(ans < 10) cout<<0<<ans<<endl;
    else cout<<ans<<endl;

    return 0;
}
