/*
    https://leetcode.com/problems/count-days-without-meetings/description/?envType=daily-question&envId=2025-03-24
*/

class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            int free=0;
            int end = 0;
    
            sort(meetings.begin(), meetings.end());
    
            for(auto meeting : meetings){
                int first = meeting[0];
                int last = meeting[1];
    
                if(first > end+1){
                    free += first - end -1;
                }
    
                end = max(end, last);
            }
    
            return free + days-end;
        }
    };