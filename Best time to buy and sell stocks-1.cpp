//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


class Solution {
public:
    int maxProfit(vector<int>& v) {
        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        int num=0,max1=0;
        if(v.size()==0)
            return 0;
        num=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]<num) num=v[i];
            else
                max1=max(max1,(v[i]-num));
        }
        return max1;
    }
};