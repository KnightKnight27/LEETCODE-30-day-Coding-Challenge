class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int N=nums.size();
        int sum=0;
        int max=0;
        int FLAG=0;
        int min=INT_MIN;
        for(int i=0;i<N;i++)
        {
            if(nums[i]<0)
            {
                if(nums[i]>min)
                {
                    min=nums[i];
                }
            }
            if(nums[i]>=0)
            {
                FLAG=1;
            }
            sum=sum+nums[i];
            if(sum<0)
            {
                sum=0;
            }
             if(sum>max)
                max=sum;
        }
        if(FLAG==1)
            return max;
        else
        return min;
    }
};
