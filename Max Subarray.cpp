//Problem Link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int num=0,max1=0;
        if(nums.size()<1)
            return max1;
        num=max1=nums[0];
        for(int i=1;i<nums.size();i++){
            num=max(num+nums[i],nums[i]);
            max1=max(max1,num);
        }
        return max1;
    }
};