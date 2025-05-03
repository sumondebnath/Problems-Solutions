#include<bits/stdc++.h>
using namespace std;

int main(){

    string S;
    cin >> S;
    string target = "hello";
    int index = 0;
    for (char c : S) {
        if (c == target[index]) {
            index++;
            if (index == target.size()) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}