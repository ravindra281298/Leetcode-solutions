//https://leetcode.com/problems/fibonacci-number/


/**
 * @param {number} N
 * @return {number}
 */
let dp = new Array(31);

function fibo(N) {
    if(dp[N]!=undefined)
        return dp[N];
    return dp[N]=fibo(N-1)+fibo(N-2);
}

var fib = function(N) {
    dp[0]=0,dp[1]=1;
    return fibo(N);
};