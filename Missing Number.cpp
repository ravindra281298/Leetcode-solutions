//Problem Link: https://leetcode.com/problems/missing-number/


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        int num=0;
        for(int i=0;i<nums.size();i++){
            num^=nums[i];
            num^=i+1;
        }
        return num;
    }
};