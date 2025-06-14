/*

*/

class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string maxi = to_string(num);
        string mini = to_string(num);

        char target = '9';

        for(char ch : s){
            if(ch != '9'){
                target = ch;
                break;
            }
        }

        for(char &ch : maxi){
            if(ch == target){
                ch = '9';
            }
        }

        target = mini[0];

        for(char &ch : mini){
            if(ch == target){
                ch = '0';
            }
        }

        return stoi(maxi) - stoi(mini);
    }
};