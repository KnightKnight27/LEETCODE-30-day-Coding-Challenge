class Solution {
public:
    int maxProfit(vector<int>& arr) 
    {
        int ans=0;
        int N=arr.size();
        int i=0;
        while(i<N-1)
        {
            while(i<N-1 and arr[i+1]<=arr[i])
            {
                i++;
            }
            if(i>=N-1)
            {
                return ans;
            }
            int buy=i++;
            while(i<N-1 and arr[i+1]>=arr[i])
            {
                i++;
            }
            ans+=arr[i]-arr[buy];
        }
        return ans;
    }
};
