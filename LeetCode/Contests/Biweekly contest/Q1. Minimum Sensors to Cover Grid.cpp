/*

*/

class Solution {
public:
    int minSensors(int n, int m, int k) {
        int row = (n + 2 * k) / (2 * k + 1);
        int col = (m + 2 * k) / (2 * k + 1);

        return row * col;
    }
};