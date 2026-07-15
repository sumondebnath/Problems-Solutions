/*

*/

class FindSumPairs {
public:
    map<int, int>mp;
    vector<int> num1, num2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->num1 = nums1;
        this->num2 = nums2;
        for(int num : nums2){
            mp[num]++;
        }
    }
    
    void add(int index, int val) {
        mp[num2[index]]--;
        num2[index] += val;
        
        mp[num2[index]]++;
    }
    
    int count(int tot) {
        int cnt = 0;

        for(int num : num1){
            int temp = tot - num;
            if(mp.count(temp)){
                cnt += mp[temp];
            }
        }
        return cnt;
    }
};