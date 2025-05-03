#include<bits/stdc++.h>
using namespace std;

void distinct(vector<int>arr){
    unordered_set<int>st;
    for(int val : arr){
        st.insert(val);
    }

    cout<<st.size()<<endl;
}

int main(){

    int n; cin>>n;
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    distinct(arr);

    return 0;
}