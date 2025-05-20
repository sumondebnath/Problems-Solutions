/*
    https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1
*/

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int i=a.size()-1;
        int j=0;
        while(i>=0 and j<b.size())
        {
            if(a[i]>=b[j])
            {
                swap(a[i],b[j]);
                i--;
                j++;
            }
            else
            {
                break;
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }
};