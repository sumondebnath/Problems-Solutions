/*

*/

class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int prod = 1;

        while(temp!=0){
            sum += temp%10;
            prod *= temp%10;
            temp /= 10;
        }

        cout<<sum<<" "<<prod<<" "<<n<<" "<<temp<<endl;

        return n%(sum+prod)==0;
    }
};©leetcode