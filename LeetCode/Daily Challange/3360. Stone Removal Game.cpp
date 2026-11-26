/*

*/

class Solution {
public:
    bool canAliceWin(int n) {
        int temp=10, count=0;

        while(n>=temp){
            n-=temp;
            temp--;
            count++;
        }

        return count%2;
    }
};