//Problem Link: https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        int a[26];
        for(int i=0;i<26;i++) a[i]=0;
        for(int i=0;i<s.length();i++) a[s[i]-'a']+=1;
        for(int i=0;i<s.length();i++){
            if(a[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};