#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    int year, month, days;

    year = n/365;
    int year_rem = n%365;

    month = year_rem/30;

    days = year_rem%30;

    cout<<year<<" "<<"years"<<endl;
    cout<<month<<" "<<"months"<<endl;
    cout<<days<<" "<<"days"<<endl;

    return 0;
}