#include<bits/stdc++.h>
using namespace std;

void printPyramid(int curr, int n) {
    if (curr > n) {
        return;
    }
    string spaces(n - curr, ' ');
    string stars(2 * curr - 1, '*');
    cout << spaces << stars << endl;
    printPyramid(curr + 1, n);
}

int main(){

    int n; cin>>n;

    printPyramid(1, n);

    return 0;
}