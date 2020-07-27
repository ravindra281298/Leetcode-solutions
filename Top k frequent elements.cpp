//Problem Link:  https://leetcode.com/problems/top-k-frequent-elements/


class Solution {
public:
    
    static bool fun(pair<int,int> p1, pair<int,int> p2){
        return p1.second>p2.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++) mp[nums[i]]+=1;
        
        vector<pair<int,int>> v;
        for(auto it:mp){
            v.push_back(make_pair(it.first,it.second));
        }
        
        sort(v.begin(),v.end(),fun);
        
        for(int i=0;i<k;i++) res.emplace_back(v[i].first);
        mp.clear(),v.clear();
        return res;
    }
};