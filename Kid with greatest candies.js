//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/


/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(nums, k) {
    let num=0;
    nums.map(i => num=Math.max(i,num));
    let res= nums.map(i => { return (i+k)>=num});
    return res;
    
};