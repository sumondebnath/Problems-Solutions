#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    int fib1 = 0;
    int fib2 = 1;
    
    for(int i=1; i<=n; i++){
        cout<<fib1<<" ";
        int temp = fib1;
        fib1 = fib2;
        fib2 = temp + fib2;
    }

    return 0;
}