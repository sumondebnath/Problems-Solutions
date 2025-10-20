/*

*/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;

        for(auto operation : operations){
            if(operation[0] == '+' || operation[operation.length()-1] == '+'){
                count++;
            }
            else {
                count--;
            }
        }

        return count;
    }
};