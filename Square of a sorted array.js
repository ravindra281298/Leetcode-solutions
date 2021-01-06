//https://leetcode.com/problems/squares-of-a-sorted-array/


/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortedSquares = function(a) {
    a=a.map(i=>i*i)
    a.sort((a,b) =>{return a-b;})
    return a;
};