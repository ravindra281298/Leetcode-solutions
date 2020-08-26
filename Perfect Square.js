//https://leetcode.com/problems/perfect-squares/

/**
 * @param {number} n
 * @return {number}
 */
var numSquares = function(m) {
    let n = Math.floor(Math.sqrt(m));
    let dp=Array.from(Array(n+1),()=> new Array(m+1));
    
    for(let i=0;i<n+1;i++) dp[i][0]=0;
    for(let i=1;i<m+1;i++) dp[0][i]=1e9+6;
    
    let num=0;
    for(let i=1;i<n+1;i++) {
        for(let j=1;j<m+1;j++) {
            num=i*i;
            if(num<=j) 
                dp[i][j] = Math.min(1+dp[i][j-num],dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    // console.log(dp);
    return dp[n][m];
};