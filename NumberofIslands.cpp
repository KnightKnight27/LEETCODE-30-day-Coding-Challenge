
bool vis[1001][1000];
static int X[]={0,1,-1,0};
static int Y[]={1,0,0,-1};
class Solution 
{
    public:
    bool isSafe(int i,int j,int N, int M)
    {
        if(i>=0 and i<N and j>=0 and j<M)
        {
            return true;
        }
        return false;
    }
    void dfs(int i, int j, vector<vector<char> > &A,int N,int M)
    {
        vis[i][j]=true;
        for(int k=0;k<4;k++)
        {
            int x=i+X[k];
            int y=j+Y[k];
            if(isSafe(x,y,N,M)==false)
            {
                continue;
            }
            if(A[x][y]=='1' and vis[x][y]==false)
            {
                dfs(x,y,A,N,M);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid)
    {
        int N=grid.size();
        if(N==0)
            return 0;
        int M=grid[0].size();
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                vis[i][j]=false;  
            }
        }
        int count=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(vis[i][j]==false and grid[i][j]=='1')
                {
                    dfs(i,j,grid,N,M);
                    count++;
                }
            }
        }
        return count;
    }
};
