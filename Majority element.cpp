//Problem Link: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]+=1;
        int num=0;
        for(auto it:mp){
            if(it.second>nums.size()/2){
                num=it.first;
                break;
            }
        }
        return num;
    }
};