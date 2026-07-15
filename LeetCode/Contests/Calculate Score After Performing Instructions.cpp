/*

*/

class Solution {
    public:
        long long calculateScore(vector<string>& instructions, vector<int>& values) {
            int n = values.size();
            long long score = 0;
    
            int i = 0;
            vector<bool>visit(n, false);
            
            while(i>=0 && i<n && !visit[i]){
                visit[i] = true;
                
                if(instructions[i] == "add") {
                    score += values[i];
                    i++;
                }
                else if(instructions[i] == "jump") {
                    i+=values[i];
                    continue;
                }
                // i++;
            }
            return score;
        }
    };©leetcode