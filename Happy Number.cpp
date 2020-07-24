//Problem Link: https://leetcode.com/problems/happy-number/



class Solution {
public:
    
    int digit_square_sum(int n){
        int res=0,num;
        while(n>0){
            num=n%10;
            n/=10;
            res+=pow(num,2);
        }
        return res;
    }
    
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(n!=1){
            if(mp[n]>=1)
                break;
            mp[n]+=1;
            n=digit_square_sum(n);
            
        }
        if(n==1)
            return true;
        else
            return false;
    }
};