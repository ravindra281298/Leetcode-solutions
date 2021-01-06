//https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/

/**
 * @param {string} s
 * @return {number}
 */
var minDeletions = function(s) {
    let dp = new Array(26);
    for(let i=0;i<26;i++) dp[i]=0;
    for(let i =0;i<s.length;i++){
        dp[s[i].charCodeAt()-97]+=1;
    }
    dp.sort((a,b)=>{return b-a});
    let num=0;
    let a={};
    a[dp[0]]=1;
    for(let i=1;i<dp.length;i++){
        while(a[dp[i]]==1 && dp[i]>0){
            dp[i]-=1;
            num+=1;
        }
        if(dp[i]>0)
        a[dp[i]]=1;
    }
    console.log(a,dp);
    return num;
};