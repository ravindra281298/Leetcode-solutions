//Problem Link:  https://leetcode.com/problems/power-of-three/


class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0||n<0) 
            return false;
        
        double p=log10(n)/log10(3);
        if(p==int(p)) 
            return true;
        
         return false;
    }
};