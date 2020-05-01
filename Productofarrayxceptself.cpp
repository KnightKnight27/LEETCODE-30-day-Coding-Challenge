class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int N=nums.size();
        vector<int> Prod(nums.size(),1);
        int temp=1;
        for(int i=0;i<N;i++)
        {
            Prod[i]=temp;
            temp=temp*nums[i];
        }
        temp=1;
        for(int i=N-1;i>=0;i--)
        {
            Prod[i]=Prod[i]*temp;
            temp=temp*nums[i];
        }
        return Prod;
    }
};
