#include<bits/stdc++.h>
using namespace std;

int sum_digit(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }

    return sum;
}

int main(){

    int n, a, b;
    cin>>n>>a>>b;

    int result = 0;

    for(int i=1; i<=n; i++){
        int sum = sum_digit(i);
        if(sum >= a && sum <= b) result += i;
    }

    cout<<result<<endl;

    return 0;
}