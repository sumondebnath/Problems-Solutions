/*

*/

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> v(m);
        v[0] = string(n, '.');
        string temp = string(n-1, '#') + '.';

        for(int i=1; i<m; i++){
            v[i] = temp;
        }

        return v;
    }
};