#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    // cin>>s;
    getline(cin, s);

    // stringstream str(s);
    // int count=0;
    // string word;

    // while(str >> word){
    //     if(word[0]==',' || word[0]=='!' || word[0]=='.' || word[0]=='?') continue;
    //     count++;
    // }

    int count = 0;
    bool word = false;

    for (char c : s) {
        if (isalpha(c)) {
            if (!word) {
                count++;
                word = true;
            }
        } else {
            word = false;
        }
    }

    cout<<count<<endl;

    return 0;
}