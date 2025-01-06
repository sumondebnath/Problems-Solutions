#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    int passenger = INT_MIN;
    int stopage = 0;

    while(n--){
        int exit, enter;
        cin>>exit>>enter;

        stopage += enter;
        stopage -= exit;
        passenger = max(passenger, stopage);
    }

    cout<<passenger<<endl;

    return 0;
}