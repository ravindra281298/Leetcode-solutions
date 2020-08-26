//https://leetcode.com/problems/pascals-triangle/


/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(n) {
    let res=[],num=[1];
    if(n==0)
        return res;
    res.push(num);
    for(let i=1;i<n;i++){
        num=[];
        for(let j=0;j<res[res.length-1].length;j++){
            if(j==0)
                num.push(res[res.length-1][j]);
            if(j==res[res.length-1].length-1)
                num.push(res[res.length-1][j]);
            if(j+1<res[res.length-1].length)
                num.push(res[res.length-1][j]+res[res.length-1][j+1]);
        }
        res.push(num);
    }
    return res;
};