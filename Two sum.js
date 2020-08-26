// https://leetcode.com/problems/two-sum/submissions/

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let a={},num;
    let res=[];
    for(let i=0;i<nums.length;i++) {
        num=target-nums[i];
        if(a[num]!=undefined){
            res.push(a[num]);
            res.push(i);
            break;
        }
        else{
            a[nums[i]]=i;
        }
    }
    return res;
};