//https://leetcode.com/problems/move-zeroes/

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let num = 0,n=nums.length;
    for(let i=0;i<n;i++) {
        if(nums[i]==0){
            num+=1;
            nums.splice(i,1);
            n-=1;
            i-=1;
        }
    }
    while(num--){
        nums.push(0);
    }
};