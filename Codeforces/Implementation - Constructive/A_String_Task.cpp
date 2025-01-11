#include<bits/stdc++.h>
using namespace std;

bool isChar(char ch){
    return (ch=='A' || ch=='a' || ch=='O' || ch=='o' || ch=='Y' || ch=='y' || ch=='E' || ch=='e' || ch=='U' || ch=='u' || ch=='I' || ch=='i');
}

int main(){

    string str;
    cin>>str;

    string s;

    for(int i=0; i<str.length(); i++){
        if(!isChar(str[i])){
            s+='.';
            s+= tolower(str[i]);
        }
    }

    cout<<s<<endl;

    return 0;
}