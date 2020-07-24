//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int num=0,min1=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min1)
                min1=prices[i];
            else{
                num+=prices[i]-min1;
                min1=prices[i];
            }
        }
        return num;
    }
};