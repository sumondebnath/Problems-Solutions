#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n==1){
        return 1;
    }
    if(n==2) return 2;

    int prev = 1, curr=1, sum = 2;

    for(int i=3; i<=n; i++){
        int next = prev + curr;
        sum += next;
        prev = curr;
        curr = next;
    }
    return sum;

}

int main(){

    int n; cin>>n;

    cout<<solve(n)<<endl;

    return 0;
}