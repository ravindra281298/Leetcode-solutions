//Problem Link:  https://leetcode.com/problems/count-primes/


class Solution {
public:
    int countPrimes(int n) {
        if(n<2)
            return 0;
        int a[n];
        for(int i=0;i<n;i++) a[i]=1;
        a[0]=a[1]=0;
        for(int i=2;i<=sqrt(n);i++){
            if(a[i]==1){
                for(int j=2*i;j<n;j+=i)
                    a[j]=0;
            }
        }
        int num=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)
                num+=1;
        }
        return num;
    }
};