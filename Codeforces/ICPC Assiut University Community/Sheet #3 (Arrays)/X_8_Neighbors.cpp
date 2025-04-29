#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    vector<vector<char>>arr(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int x, y;
    cin>>x>>y;
    x--;
    y--;

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    bool allX = true;
    
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (arr[nx][ny] != 'x') {
                allX = false;
                break;
            }
        }
    }
    
    if (allX) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}