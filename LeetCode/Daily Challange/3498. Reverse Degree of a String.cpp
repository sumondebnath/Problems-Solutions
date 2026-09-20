/*

*/

class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int sum = 0;
        for(int i=0; i<n; i++){
            int chVal = abs(s[i]-'z')+1;
            int val = chVal*(i+1);
            sum += val;
        }

        return sum;
    }
};