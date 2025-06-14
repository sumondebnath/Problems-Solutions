/*
    https://leetcode.com/problems/max-difference-you-can-get-from-changing-an-integer/description/
*/

class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);

        char target = '9';
        for(char ch : s){
            if(ch != target){
                target = ch;
                break;
            }
        }

        string maxi = to_string(num);
        for(char &ch : maxi){
            if(ch == target) ch = '9';
        }

        string mini = to_string(num);
        target = mini[0];
        if(target != '1'){
            for(char &ch : mini){
                if(ch == target) ch = '1';
            }
        }
        else{
            target = '0';
            for(char ch : mini){
                if(ch != '1' && ch != '0'){
                    target = ch;
                    break;
                }
            }
            if(target != '0'){
                for(char &ch : mini){
                    if(ch == target) ch = '0'; 
                }
            }
        }

        return stoi(maxi) - stoi(mini);
    }
};