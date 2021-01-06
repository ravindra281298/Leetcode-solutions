//https://leetcode.com/problems/sort-array-by-parity-ii

/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortArrayByParityII = function(nums) {
    
    let even = nums.filter(num => num%2==0?1:0);
    let odd = nums.filter(num => num%2==1?1:0);
    
    let res=[];
    
    for(let i=0;i<nums.length;i++) {
        if(i%2==0){
            res.push(even.shift());
        }
        else{
            res.push(odd.shift());
        }
    }
    return res;
};