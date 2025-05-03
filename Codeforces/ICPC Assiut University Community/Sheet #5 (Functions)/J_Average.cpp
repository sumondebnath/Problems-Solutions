#include<bits/stdc++.h>
using namespace std;

void avarage(vector<float>arr, int n){
    double sum = 0;

    for(auto val : arr){
        sum += val;
    }

    cout<<fixed<<setprecision(7)<<sum/n<<endl;
}

int main(){

    int n; cin>>n;
    vector<float>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    avarage(arr, n);

    return 0;
}