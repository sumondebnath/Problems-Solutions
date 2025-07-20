/*

*/

class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        map<int, vector<int>> yAxis;
        for (auto point : points) {
            int x = point[0], y = point[1];
            yAxis[y].push_back(x);
        }

        long long MOD = 1e9 + 7;
    
        long long sum = 0;
        long long sumSquare = 0;
    
        for (auto entry : yAxis) {
            const vector<int>& xAxis = entry.second;
            int size = xAxis.size();
    
            if (size >= 2) {
                long long temp = (long long)size * (size - 1) / 2;
                sum = (sum + temp) % MOD;
                sumSquare = (sumSquare + (temp * temp) % MOD) % MOD;
            }
        }
    
        long long S = (sum * sum) % MOD;
        long long num = (S - sumSquare + MOD) % MOD;
    
        long long inverse = 500000004;
    
        long long total = (num * inverse) % MOD;
    
        return (int)total;
    }
};