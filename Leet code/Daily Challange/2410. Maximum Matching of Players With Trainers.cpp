/*

*/

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n = players.size();
        int m = trainers.size();
        int count = 0;
        int i=0, j=0;

        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        while(i<n && j<m){
            if(j<m && players[i] > trainers[j]){
                j++;
            }
            if(j<m) {
                count++;
            }
            i++;
            j++;
        }

        return count;
    }
};