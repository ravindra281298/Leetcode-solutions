//Problem Link:  https://leetcode.com/problems/fibonacci-number/



class Solution {
public:
    int dp[31];
    int fib(int N) {
        if(N<0)
            return 0;
        if(N==1)
            return 1;
        if(dp[N]!=0)
            return dp[N];
        return dp[N] = fib(N-1)+fib(N-2);
    }
};