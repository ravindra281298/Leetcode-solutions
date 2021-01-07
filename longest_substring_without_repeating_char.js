//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3595/

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let dp = new Array(150);
    for(let i=0;i<150;i++) dp[i]=0;
    let num=1,l=0,r=1,max1=1;
    if(s.length==0)
        return 0;
    if(s.length==1)
        return 1;
    dp[s[0].charCodeAt()]=1;
    while(r<s.length){
        if(dp[s[r].charCodeAt()]==0){
            dp[s[r].charCodeAt()]=1;
            num+=1;
        }
        else{
            while(s[l]!=s[r]){
                dp[s[l].charCodeAt()]=0;
                num-=1;
                l+=1;
            }
            dp[s[l].charCodeAt()]=1;
            l+=1;
        }
        r+=1;
        if(num>max1) max1=num;
    }
    return max1;
};