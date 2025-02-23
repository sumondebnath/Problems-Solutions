#include<bits/stdc++.h>
using namespace std;

void Permutation(int n){
    
    if(n%2 != 0){
        cout<<-1<<endl;
    }
    else{
        vector<int>arr;
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
        int l=0, r=1;
        while(l<arr.size() && r<arr.size()){
            swap(arr[l], arr[r]);
            l+=2;
            r+=2;
        }
        for(int val : arr){
            cout<<val<<" ";
        }
    }

}

int main(){

    int n; cin>>n;

    Permutation(n);

    return 0;
}