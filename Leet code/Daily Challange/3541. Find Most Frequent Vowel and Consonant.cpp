/*

*/

class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> mp1, mp2;

        for(char ch : s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                mp1[ch]++;
            }
            else{
                mp2[ch]++;
            }
        }

        int maxi1 = 0, maxi2 = 0;

        for(auto it : mp1){
            maxi1 = max(maxi1, it.second);
        }

        for(auto it : mp2){
            maxi2 = max(maxi2, it.second);
        }

        return maxi1 + maxi2;
    }
};