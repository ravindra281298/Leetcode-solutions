//Problem Link: https://leetcode.com/problems/number-of-1-bits/



class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum=0;
        while(n!=0){
            sum+=1;
            n&=(n-1);
        }
        return sum;
    }
};



// 2nd method

class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> b(n);
        return b.count();
    }
};