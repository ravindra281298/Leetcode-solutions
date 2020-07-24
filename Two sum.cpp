//Problem Link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp[target-nums[i]]>0){
                res.emplace_back(mp[target-nums[i]]-1);
                res.emplace_back(i);
                break;
            }
            else{
                mp[nums[i]]=i+1;
            }
        }
        return res;
    }
};