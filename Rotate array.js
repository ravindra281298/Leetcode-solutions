//https://leetcode.com/problems/rotate-array/


/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    k%=nums.length;
    num=nums.splice(nums.length-k,k);
    for(let i=0;i<nums.length;i++)
        num.push(nums[i]);
    nums.splice(0,nums.length);
    for(let i=0;i<num.length;i++)
        nums.push(num[i]);
};