/*
    https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75
*/

class Solution {
public:
    bool is_vowel(char ch){
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U') return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0, j=s.length();

        while(i<j){
            if(is_vowel(s[i]) && is_vowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            if(!is_vowel(s[i])) i++;
            if(!is_vowel(s[j])) j--;
        }

        return s;
    }
};