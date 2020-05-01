class Solution {
public:
    int subarraySum(vector<int>& arr, int k) 
    {
        int sum=0;
        int count=0;
        unordered_map<int,int> Hash;
        for(auto it:arr)
        {
            sum+=it;
            if(sum==k)
                count++;
            if(Hash[sum-k])
                count+=Hash[sum-k];
            Hash[sum]++;
        }
        return count;
    }
};
