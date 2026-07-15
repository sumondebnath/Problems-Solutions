/*
    https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75
*/

// Brout Force

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int i=0, j=0;
        string s="";
        while(i<n && j<m){
            s += word1[i];
            i++;
            s += word2[j];
            j++;
        }

        string s1="";

        if(n<m){
            while(n!=m){
                s1+=word2[m-1];
                m--;
            }
        }
        
        else if(m<n){
            while(m!=n){
                s1+=word1[n-1];
                n--;
            }
        }

        reverse(s1.begin(), s1.end());

        return s+s1;
    }
};


// Optimize

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = min(word1.length(), word2.length());
        int i=0;
        string s="";
        while(i<n){
            s += word1[i];
            s += word2[i];
            i++;
        }

        if(word1.length() == n){
            while(i<word2.length()){
                s+=word2[i];
                i++;
            }
        }
        else{
            while(i<word1.length()){
                s+=word1[i];
                i++;
            }
        }

        return s;
    }
};