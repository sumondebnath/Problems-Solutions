#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;
    if(str.size()<=2) cout<<str<<endl;
    else{
        int i=0, j=2;
        while(i<str.size() and j<str.size()){
            if((int)str[i] > (int)str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            i+=2;
            j+=2;
        }

        cout<<str<<endl;
    }

    return 0;
}