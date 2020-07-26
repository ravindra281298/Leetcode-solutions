//Problem Link: https://leetcode.com/problems/valid-palindrome/


class Solution {
public:
    bool isPalindrome(string s) {
        
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z')
                res+=s[i];
            else if(s[i]>='A' && s[i]<='Z')
                res+=(s[i]+32);
            else if(s[i]>='0' && s[i]<='9')
                res+=s[i];
        }
        for(int i=0;i<res.length()/2;i++){
            if(res[i]!=res[res.length()-1-i])
                return false;
        }

        return true;
    }
};