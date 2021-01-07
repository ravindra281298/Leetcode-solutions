//https://leetcode.com/problems/jump-game/

/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
    if(nums.length==0 || nums.length==1)
        return true;
    if(nums[0]==0)
        return false;
    let num=nums[0];
    for(let i=1;i<nums.length;i++){
        num-=1;
        if(nums[i]>num)
        num=nums[i];
        if(num==0 && i!=nums.length-1)
            return false;
    }
    return true;
};