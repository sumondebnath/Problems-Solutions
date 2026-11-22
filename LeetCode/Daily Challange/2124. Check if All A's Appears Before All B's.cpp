/*

*/

class Solution {
public:
    bool checkString(string s) {
        bool b = false;

        for(char ch : s){
            if(ch=='a' && b) return false;
            else if(ch=='b') b = true;
        }

        return true;
    }
};