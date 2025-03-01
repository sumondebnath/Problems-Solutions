/*
    https://www.geeksforgeeks.org/problems/reverse-squared-sum/0
*/

#include <iostream>
#include <vector>
using namespace std;



int main() {
	//code here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int>arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int sub = 0;
	    for(int i=n-1; i>=0; i--){
	        if((n-1-i)%2==0){
	            sub += arr[i]*arr[i];
	        }
	        else{
	            sub -= arr[i]*arr[i];
	        }
	    }
	    
	    cout<<sub<<endl;
	}
	return 0;
}