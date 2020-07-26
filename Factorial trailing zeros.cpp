//Problem Link: https://leetcode.com/problems/factorial-trailing-zeroes/


class Solution {
public:
    int trailingZeroes(int n) {
        int num=0,res=0;
        
        while(n>=5){
            num=n/5;
            res+=num;
            n=num;
        }
        return res;
    }
};