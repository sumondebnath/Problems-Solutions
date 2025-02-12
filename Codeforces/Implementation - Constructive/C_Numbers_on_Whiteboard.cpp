#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int>v;
        for(int i=1; i<=n; i++){
            v.push_back(i);
        }
        vector<int>r;
        while(size(v)>1){
            int s = size(v);
            int sum = v[s-1] + v[s-2];
            r.push_back(v[s-1]);
            r.push_back(v[s-2]);
            v.pop_back();
            v.pop_back();

            if(sum%2==1) v.push_back(sum/2+1);
            else v.push_back(sum/2);
        }

        cout<<v.back()<<endl;

        for(int i=0; i<size(r); i+=2){
            cout<<r[i]<<" "<<r[i+1]<<endl;
        }
    }

    return 0;
}