/*

*/

class Solution {
public:
    string largestGoodInteger(string num) {

        char maxi = NULL;
        
        for(int i=0; i<num.length()-2; i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                maxi = max(maxi, num[i]);
            }
        }

        return (maxi == NULL) ? "" : string(3, maxi);
    }
};