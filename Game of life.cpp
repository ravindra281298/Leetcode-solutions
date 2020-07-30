//Problem Link:  https://leetcode.com/problems/game-of-life/


class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        if(n==0 || m==0)
            return;
        long dp[n][m],num=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                dp[i][j]=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                num=0;
                if(i-1>=0 && j-1>=0) num+=board[i-1][j-1];
                if(i-1>=0) num+=board[i-1][j];
                if(i-1>=0 && j+1<m) num+=board[i-1][j+1];
                // num+=board[i][j];
                if(j-1>=0) num+=board[i][j-1];
                if(j+1<m) num+=board[i][j+1];
                if(i+1<n && j-1>=0) num+=board[i+1][j-1];
                if(i+1<n) num+=board[i+1][j];
                if(i+1<n && j+1<m) num+=board[i+1][j+1];
                
                if(board[i][j]==0){
                    if(num==3)
                        dp[i][j]=1;
                }
                else{
                    if(num<2)
                        dp[i][j]=0;
                    else if(num>=2 && num<=3)
                        dp[i][j]=1;
                    else if(num>3)
                        dp[i][j]=0;
                }
                // cout<<num<<" ";
            }
            // cout<<"\n";
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                board[i][j]=dp[i][j];
    }
};