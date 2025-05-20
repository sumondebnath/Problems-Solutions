#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    vector<int>a(n), b(m);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int i=0, j=0;
    long long count = 0;
    
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            int curr_a = a[i];
            long long count_a = 0, count_b = 0;
            
            while (i < n && a[i] == curr_a) {
                count_a++;
                i++;
            }
            
            while (j < m && b[j] == curr_a) {
                count_b++;
                j++;
            }
            
            count += count_a * count_b;
        }
    }

    cout<<count<<endl;

    return 0;
}