//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/


/**
 * @param {number[]} nums
 * @return {number[]}
 */

let dp=[];

function lower_bound(k) {
    let l=0,r=dp.length-1,mid=Math.floor((r+l)/2);
  
    while(l<=r){
        if(dp[mid]==k){
            if(mid-1>=0 && dp[mid-1]==k)
                r=mid-1;
            else
                return mid;
        }
        else if(dp[mid]>k)
            r=mid-1;
        else if(dp[mid]<k)
            l=mid+1;
        mid=Math.floor((l+r)/2);
    }
    return -1;
}

var smallerNumbersThanCurrent = function(nums) {
    let res=[];
    dp=Object.assign([],nums);
    dp.sort((a,b)=>{return a-b;});
    console.log(dp);
    for(let i=0;i<nums.length;i++) {
        res.push(lower_bound(nums[i]));
    }
    return res;
};