/*

*/

class Solution {
public:
    
    bool FindPrime(long long n){
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (long long i = 3; i*i <=n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }
    
    long long sumOfLargestPrimes(string s) {
        int n = s.length();
        set<long long>st;

        for(int i=0; i<n; i++){
            long long num = 0;
            for(int j=i; j<n; j++){
                num = num * 10 + (s[j] - '0');
                st.insert(num);
            }
        }

        vector<long long>arr;

        for(long long val : st){
            if(FindPrime(val)) arr.push_back(val);
        }


        sort(arr.begin(), arr.end(), greater<long long>());


        long long sum = 0;
        for(int i=0; i<min(3, (int)arr.size()); i++){
            sum += arr[i];
        }
        return sum;
    }
};©leetcode