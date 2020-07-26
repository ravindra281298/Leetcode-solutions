//Problem Link: https://leetcode.com/problems/sqrtx/


class Solution {
public:
    int mySqrt(int x) {
        if(x<1)
            return 0;
        
        long l=1,h=x,mid=l+(h-l)/2;
        while(l<=h){
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x && pow(mid+1,2)>x)
                return mid;
            if(mid*mid>x)
                h=mid;
            else
                l=mid;
            mid=l+(h-l)/2;
        }
        return mid;
    }
};