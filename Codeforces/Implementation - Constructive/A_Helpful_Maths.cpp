#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;
    // if(str.size()<=2) cout<<str<<endl;
    
    int n = str.size();
    for(int i=0; i<n-1; i+=1){
        int mini = i;
        for(int j=i+2; j<n; j+=1){
            if((int)str[j]<(int)str[mini] && str[j]!= '+'){
                mini = j;
            }
        }
        swap(str[i], str[mini]);
    } 
    cout<<str<<endl;

    return 0;
}