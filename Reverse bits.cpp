    //Problem Link:  https://leetcode.com/problems/reverse-bits/


    class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>b(n);
        for(int i=0;i<16;i++) {
            int num =b[i];
            b[i]=b[31-i];
            b[31-i]=num;
        }
        return b.to_ulong();
    }
};