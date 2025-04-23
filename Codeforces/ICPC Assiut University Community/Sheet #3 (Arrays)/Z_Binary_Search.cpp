#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int>arr,  int n){
    int left = 0, right = arr.size()-1;
    while(left <= right){
        int mid = (left+right)/2;

        if(arr[mid] == n) return true;
        else if(n < arr[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return false;
}

int main(){

    int n, x;
    cin>>n>>x;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    while(x--){
        int a; cin>>a;
        // if(BinarySearch(arr, a)) cout<< "found"<<endl;
        // else cout<<"not found"<<endl;

        if (binary_search(arr.begin(), arr.end(), a)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }

    return 0;
}