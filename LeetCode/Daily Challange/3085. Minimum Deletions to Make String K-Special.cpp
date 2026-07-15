/*

*/

class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char, int>mp;

        for(char ch : word){
            mp[ch]++;
        }
        int result = word.size();

        for(auto [key1, val1] : mp){
            int temp = 0;
            for(auto [key2, val2] : mp){
                if(val1 > val2){
                    temp += val2;
                }
                else if(val2 > val1 + k){
                    temp += val2 - (val1 + k);
                }
            }
            result = min(result, abs(temp));
        }

        return result;
    }
};