//https://leetcode.com/problems/majority-element/


/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let a={};
    for(let i=0;i<nums.length;i++) {
        if(a[nums[i]]!=undefined)
            a[nums[i]]+=1;
        else
            a[nums[i]]=1
    }
    res=0,num=-1;
    console.log(a);
    Object.keys(a).forEach((i)=>{
        // console.log(i);
        if(a[i]>res)
            res=a[i],num=i;
    });
    return num;
};