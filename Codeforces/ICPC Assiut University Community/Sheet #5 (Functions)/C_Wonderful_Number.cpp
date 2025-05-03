#include<bits/stdc++.h>
using namespace std;

string deToBi(int n){
    if (n == 0) {
        return "0";
    }
    string bi;
    while (n > 0) {
        bi += (n % 2) + '0';
        n /= 2;
    }
    reverse(bi.begin(), bi.end());
    return bi;
}

bool isPalindrome(string s){
    int l = 0, r = s.length()-1;
    // bool flag = true;

    while(l<=r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }

    return true;
}

int main(){

    int n; cin>>n;

    if(n%2!=0){
        string s = deToBi(n);
        if(isPalindrome(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}