/*

*/

class Solution {
public:
    string generateTag(string caption) {
        istringstream ss(caption);
        string word, str = "#";
        bool first = true;
    
        while (ss >> word) {
            string clean;
            for (char ch : word) {
                if (isalpha(ch)) {
                    clean += tolower(ch);
                }
            }
    
            if (clean.empty()) continue;
    
            if (first) {
                str += clean;
                first = false;
            } else {
                clean[0] = toupper(clean[0]);
                str += clean;
            }
        }
    
        if (str.size() > 100) {
            str = str.substr(0, 100);
        }
    
        return str;
    }
};©leetcode