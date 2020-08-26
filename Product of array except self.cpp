//Problem Link: https://leetcode.com/problems/product-of-array-except-self/


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> res(nums.size(),1);
        
        for(int i=nums.size()-2;i>=0;i--)
            res[i]=res[i+1]*nums[i+1];
        
        int num=nums[0],num1,nums[0]=1;
        
        for(int i=1;i<nums.size();i++){
            num1=nums[i];
            nums[i]=nums[i-1]*num;
            num=num1;
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" "<<res[i]<<"\n";
            res[i]*=nums[i];
        }
        return res;
    }
};