//https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero


/**
 * @param {number} n
 * @return {number[]}
 */
var sumZero = function(n) {
    let res = [];
    for(let i=1;i<n;i++)
        res.push(i);
    n-=1;
    res.push(-1*((n*(n+1))/2));
    return res;
};