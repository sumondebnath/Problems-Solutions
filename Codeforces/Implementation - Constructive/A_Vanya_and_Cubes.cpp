#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    int count=0;
    int temp = n;

    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=1; j<=i; j++){
            sum+=j;
        }
        if(temp < sum) break;
        temp -= sum;
        count++;
    }

    cout<<count<<endl;

    return 0;
}