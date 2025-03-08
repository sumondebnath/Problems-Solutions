/*
    https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?envType=daily-question&envId=2025-03-08
*/

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.size();
            int i=0, j=0;
            int mini = INT_MAX;
            int white = 0;
            while(i<n){
                if(blocks[i] == 'W') white++;
                if(i-j+1 == k){
                    mini = min(mini, white);
                    if(blocks[j] == 'W') white--;
    
                    j++;
                }
                i++;
            }
    
            return mini;
        }
    };