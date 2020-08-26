//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let a={};
    let res=[],num;
    for(let i=0;i<nums.length;i++) {
        num=target-nums[i];
        if(a[num]!=undefined){
            res.push(a[num]+1);
            res.push(i+1);
            break;
        }
        else{
            a[nums[i]]=i;
        }
    }
    return res;
};