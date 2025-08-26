/*

*/

class Solution
{
public:
    int areaOfMaxDiagonal(vector<vector<int>> &dimensions)
    {
        int n = dimensions.size();
        double maxi = INT_MIN;
        int ractangle = 0;

        for (auto dimension : dimensions)
        {
            int a = dimension[0];
            int b = dimension[1];
            if (sqrt(a * a + b * b) > maxi)
            {
                ractangle = a * b;
                maxi = sqrt(a * a + b * b);
            }
            else if (sqrt(a * a + b * b) == maxi)
            {
                maxi = sqrt(a * a + b * b);
                ractangle = max(ractangle, a * b);
            }
        }
        return ractangle;
    }
};