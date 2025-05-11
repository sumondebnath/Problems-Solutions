#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;

    while (count <= n) {
        unordered_set<int> ele;
        for (int i = 0; i < n - count; i++) {
            ele.insert(arr[i]);
        }
        bool flag = true;
        for (int i = 1; i <= m; i++) {
            if (ele.find(i) == ele.end()) {
                flag = false;
                break;
            }
        }
        if (!flag) {
            cout << count << endl;
            return 0;
        }
        count++;
    }

    cout << n << endl;


    return 0;
}