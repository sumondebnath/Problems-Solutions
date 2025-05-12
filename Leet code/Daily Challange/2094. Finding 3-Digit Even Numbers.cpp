/*

*/

class Solution {
    public:
        vector<int> findEvenNumbers(vector<int>& digits) {
            int n = digits.size();
            set<int>st;
    
            
    
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    for(int k=0; k<n; k++){
                        if(i==j || i==k || j==k){
                            continue;
                        }
                        int temp = digits[i]*100 + digits[j]*10 + digits[k];
                            if(temp >= 100 && temp%2==0){
                                st.insert(temp);
                            }
                    }
                }
            }
    
            vector<int>v(st.begin(), st.end());
    
            sort(v.begin(), v.end());
    
            return v;
        }
    };