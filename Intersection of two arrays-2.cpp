//Problem Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> res;
        
        for(int i=0;i<nums1.size();i++) mp[nums1[i]]+=1;
        
        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]]>0){
                res.push_back(nums2[i]);
                mp[nums2[i]]-=1;
            }
        }
        return res;
    }
};