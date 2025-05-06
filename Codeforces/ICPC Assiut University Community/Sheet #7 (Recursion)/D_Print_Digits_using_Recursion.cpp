#include<bits/stdc++.h>
using namespace std;

void digits(int n){
    if(n<10) {
        cout<<n<<" ";
        return;
    }
    // if(n>0 && n%10!=0) s += to_string(n%10);
    digits(n / 10);
    cout<<n%10<<" ";
    
}

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;

        digits(n);
        cout<<endl;
        // for(int i=s.length()-1; i>=0; i--){
        //     cout<<s[i]<<" ";
        // }
        // cout<<endl;
    }

    return 0;
}