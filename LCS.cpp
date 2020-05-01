class Solution 
{
    public:
        int longestCommonSubsequence(string A, string B) 
        {
            int N=A.size();int M=B.size();
            int dp[N+1][M+1];
            for(int i=0;i<=M;i++){dp[0][i]=0;}
            for(int j=0;j<=N;j++){dp[j][0]=0;}
            for(int i=1;i<=N;i++)
            {
                for(int j=1;j<=M;j++)
                {

                    if(A[i-1]==B[j-1])
                        dp[i][j]=1+dp[i-1][j-1];
                    else
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
            return dp[N][M];
        }
};
