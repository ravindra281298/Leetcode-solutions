//Problem Link: https://leetcode.com/problems/rotate-array/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        
        for(int i=0;i<nums.size()/2;i++)
            swap(nums[i],nums[nums.size()-1-i]);
        
        for(int i=0;i<k/2;i++)
            swap(nums[i],nums[k-1-i]);
        
        for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        
        int i=k,j=nums.size()-1,num=(nums.size()-k)/2;
        while(num--){
            swap(nums[i++],nums[j--]);
        }
         
    }
};