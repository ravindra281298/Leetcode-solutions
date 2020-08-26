//https://leetcode.com/problems/coin-change/


/**
 * @param {number[]} coins
 * @param {number} amount
 * @return {number}
 */
var coinChange = function(coins, amount) {
    let dp = Array.from(Array(coins.length+1),()=> new Array(amount+1));
    
    for(let i=0;i<coins.length+1;i++) dp[i][0]=0;
    for(let i=1;i<amount+1;i++) dp[0][i]=1e9+6;
    
    
    for(let i=1;i<coins.length+1;i++) {
        for(let j=1;j<amount+1;j++) {
            if(coins[i-1]<=j)
                dp[i][j] = Math.min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    if(dp[coins.length][amount]==1e9+6)
        return -1;
    return dp[coins.length][amount];
};