//https://leetcode.com/problems/shuffle-the-array/


/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    let res = new Array(2*n);
    let j=0;
    for(let i=0;i<n;i++) {
        res[j]=nums[i];
        j+=2;
    }
    j=1;
    for(let i=n;i<nums.length;i++) {
        res[j]=nums[i];
        j+=2;
    }
    return res;
};