#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        set<int> s(v.begin(), v.end());
        
        s.erase(-1);
        if (s.size()<=1 && !s.count(0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}