#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;

    while(cin>>a>>b){
        cout<<a<<" "<<b<<" ";
        int maxi = INT_MIN;
        if(a>b) swap(a, b);

        for(int i=a; i<=b; i++){
            int count = 1;
            int n = i;

            while(n!=1){
                
                if(n%2==0){
                    n /= 2;
                }
                else {
                    n = 3*n + 1;
                }
                count++;
            }

            maxi = max(maxi, count);
        }

        cout<<maxi<<endl;
    }

    return 0;
}