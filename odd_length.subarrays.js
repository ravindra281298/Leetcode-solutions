//https://leetcode.com/problems/sum-of-all-odd-length-subarrays

/**
 * @param {number[]} arr
 * @return {number}
 */
var sumOddLengthSubarrays = function(arr) {
    let dp = [], res = 0, k = 0;
        dp.push(0);
        for(let i=0;i<arr.length;i++) {
            dp.push(dp[i]+arr[i]);
        }
        
        for(let i=1;i<=arr.length;i+=2) {
            k=0;
            for(let j=i;j<=arr.length;j++) {
                res+=(dp[j]-dp[k++]);
            }
        }
        return res;
};