#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int countVowels(const string &s, int index) {
    if (index >= s.length()) {
        return 0;
    }
    return isVowel(s[index]) + countVowels(s, index + 1);
}

int main(){

    string s;
    getline(cin, s);

    cout<<countVowels(s, 0)<<endl;

    return 0;
}