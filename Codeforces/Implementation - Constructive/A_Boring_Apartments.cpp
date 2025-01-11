#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        int sum = 0;
        for(int i=1; i<=9; i++){
            int ex = 10;
            int item = i;
            int cnt = 0;
            
            while(item<10000){
                cnt++;
                if(item==x){
                    break;
                }
                item += ex*i;
                ex *= 10;
            }
            for(int j=1; j<=cnt; j++){
                sum+=j;
            }
            if(item==x) break;   
        }

        cout<<sum<<endl;
    }

    return 0;
}