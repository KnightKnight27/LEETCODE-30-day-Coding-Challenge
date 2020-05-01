class Solution {
public:
    int search2(int start,int end,vector<int> arr,int K)
    {
        if(start>end)
            return -1;
        int mid=(start+end)/2;
        if(arr[mid]==K)
            return mid;
        if(arr[start]<=arr[mid])
        {
            if(arr[start]<=K and arr[mid]>=K)
            {
                return search2(start,mid-1,arr,K);
            }
            return search2(mid+1,end,arr,K);
        }
        if(arr[mid]<=K and arr[end]>=K)
            return search2(mid+1,end,arr,K);
        return search2(start,mid-1,arr,K);
    }
    int search(vector<int>& arr, int K)
    {
        int N=arr.size();
        return search2(0,N-1,arr,K);
    }
};
