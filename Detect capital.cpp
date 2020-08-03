//Problem Link:  https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3409/


class Solution {
public:
    
    bool fun1(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z')
                return false;
        }
        return true;
    }
    
    bool fun2(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z')
                return false;
        }
        return true;
    }    
    
    bool fun3(string s){
        if(s[0]>='a' && s[0]<='z')
        return false;
        for(int i=1;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z')
                return false;
        }
        return true;
    }    
    
    
    
    bool detectCapitalUse(string word) {
        if(fun1(word) || fun2(word) || fun3(word))
            return true;
        return false;
    }
};