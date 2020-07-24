//Problem Link: https://leetcode.com/problems/plus-one/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num=1;
        
        for(int i=digits.size()-1;i>=0;i--){
            digits[i]+=num;
            if(digits[i]>9){
                digits[i]%=10;
                num=1;
            }
            else{
                num=0;
                break;
            }
        }
        if(num==1)
            digits.emplace(digits.begin(),num);
        return digits;
    }
};