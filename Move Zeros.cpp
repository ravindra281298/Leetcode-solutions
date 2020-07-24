// Problem Link: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size();i++)
            num+=(nums[i]==0);
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                res.push_back(nums[i]);
        }
        while(num--)
            res.push_back(0);
        for(int i=0;i<nums.size();i++)
            nums[i]=res[i];
    }
};