#include<bits/stdc++.h>
using namespace std;

// int divided(int n){
//     int count = 0;

//     while(n%2==0){
//         n /= 2;
//         count++;
//     }
//     return count;
// }

int main(){

    int n; cin>>n;

    
    int maxi = 0;

    while(n--){
        long long num;
        cin>>num;

        int count = 0;

        if(num%2!=0) count = 0;
        else{
            while(num > 0){
                if(num%2!=0) break;
                else{
                    count++;
                    num /= 2;
                }
            }
        }
        
        maxi = max(maxi, count);
    }

    cout<<maxi<<endl;

    return 0;
}