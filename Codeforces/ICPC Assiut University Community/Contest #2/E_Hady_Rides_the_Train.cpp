#include<bits/stdc++.h>
using namespace std;

int main(){

    long long id;
    cin>>id;

    long long row, col;

    row = id / 4;

    col = (row%2==0) ? id%4 : 3 - id%4;

    cout<<row<<" "<<col<<endl;

    return 0;
}