/*

*/

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a, b;
        for(int i=1; i<=n/2+1; i++){
            a = i;
            b = n-i;

            if((to_string(a) + to_string(b)).find('0') == string::npos) return {a, b};
        }

        return {a, b};
    }
};