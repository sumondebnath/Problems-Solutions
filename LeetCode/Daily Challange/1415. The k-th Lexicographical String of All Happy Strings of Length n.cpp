/*
    https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/?envType=daily-question&envId=2025-02-19
*/

class Solution {
    public:
        vector<string>arr;
        void BuildHappyString(int n, int k, string str){
            if(arr.size() == k) return;
            else if(str.length() == n){
                arr.push_back(str);
                return;
            }
    
            for(auto char_Str : {'a', 'b', 'c'}){
                if(str.length()==0 || str.back()!=char_Str){
                    BuildHappyString(n, k, str+char_Str);
                }
            }
        }
        string getHappyString(int n, int k) {
            string s;
            BuildHappyString(n, k, s);
    
            if(arr.size() < k) return "";
            return arr[k-1];
        }
    };