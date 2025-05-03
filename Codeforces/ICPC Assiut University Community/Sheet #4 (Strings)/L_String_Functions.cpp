#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, q;
    cin>>n>>q;
    string s;
    cin>>s;

    while(q--){
        string query;
        cin>>query;

        if(query == "pop_back"){
            if(!s.empty()) s.pop_back();
        }
        else if(query == "front"){
            if(!s.empty()) cout<<s.front()<<endl;
        }
        else if(query == "back"){
            if(!s.empty()) cout<<s.back()<<endl;
        }
        else if(query=="sort"){
            int l, r;
            cin>>l>>r;
            if(l>r) swap(l, r);
            if(!s.empty() && l>=1 && r<=s.size() && l <= r) sort(s.begin()+l-1, s.begin()+r);
        }
        else if(query=="reverse"){
            int l, r;
            cin>>l>>r;
            if(l>r) swap(l, r);
            if(!s.empty() && l>=1 && r<=s.size() && l <= r) reverse(s.begin()+l-1, s.begin()+r);
        }
        else if(query == "print"){
            int pos; cin>>pos;
            if(!s.empty() && pos>=1 && pos<=s.size())cout<<s[pos-1]<<endl;
        }
        else if(query == "substr"){
            int l, r;
            cin >> l >> r;
            if(l>r) swap(l, r);
            if(!s.empty() && l>=1 && r<=s.size() && l <= r) cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if(query=="push_back"){
            char x; cin>>x;
            s.push_back(x);
        }
    }

    return 0;
}