class Solution {
public:
    int maximalSquare(vector<vector<char>>& arr)
    {
        int N=arr.size();
        if(N==0)
            return 0;
        int M=arr[0].size();
        int dp[1001][1001]={0};
        int ans=0;
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=M;j++)
            {
                if(arr[i-1][j-1]=='1')
                {
                    dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                }
                ans=max(ans,dp[i][j]);
            }
        }
        return ans*ans;
    }
};
