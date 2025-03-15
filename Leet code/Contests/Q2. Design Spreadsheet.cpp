/*

*/

class Spreadsheet {
    private:
        unordered_map<string, int>mp;
    public:
        Spreadsheet(int rows) {
            
        }
        
        void setCell(string cell, int value) {
            mp[cell] = value;
        }
        
        void resetCell(string cell) {
            mp.erase(cell);
        }
        
        int getValue(string formula) {
            if (formula[0] != '=') {
                try {
                    return stoi(formula);
                } catch (const invalid_argument& e) {
                    return mp.count(formula) ? mp[formula] : 0;
                }
            }
    
            size_t pos = formula.find('+');
            if (pos == string::npos) {
                return 0;
            }
    
            string left = formula.substr(1, pos - 1);
            string right = formula.substr(pos + 1);
    
            int leftVal = 0;
            int rightVal = 0;
    
            try {
                leftVal = stoi(left);
            } catch (const invalid_argument& e) {
                leftVal = mp.count(left) ? mp[left] : 0;
            }
    
            try {
                rightVal = stoi(right);
            } catch (const invalid_argument& e) {
                rightVal = mp.count(right) ? mp[right] : 0;
            }
    
            return leftVal + rightVal;
        }
    };
    
    /**
     * Your Spreadsheet object will be instantiated and called as such:
     * Spreadsheet* obj = new Spreadsheet(rows);
     * obj->setCell(cell,value);
     * obj->resetCell(cell);
     * int param_3 = obj->getValue(formula);
     */©leetcode