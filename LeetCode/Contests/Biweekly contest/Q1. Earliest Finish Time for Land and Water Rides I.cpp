/*

*/

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();
        int mini = INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int land = landStartTime[i] + landDuration[i];
                int water = max(land, waterStartTime[j]);
                int finish = water + waterDuration[j];
                mini = min(mini, finish);

                int water1 = waterStartTime[j] + waterDuration[j];
                int land1 = max(water1, landStartTime[i]);
                finish = land1 + landDuration[i];
                mini = min(mini, finish);
            }
        }

        return mini;
        
    }
};©leetcode