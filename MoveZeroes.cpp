class Solution {
public:
    void moveZeroes(vector<int>& A) 
    {
        int N=A.size();int count=0;for(int i=0;i<N;i++){if(A[i]){count++;}}
        int index=0;
        for(int i=0;i<N;i++)
        {
            if(A[i])
            {
                if(count>=0)
                {
                    A[index++]=A[i];
                    count--;
                }
                else
                {
                    break;
                }
            }
        }
        while(index<N)
        {
            A[index++]=0;
        }
        
        
    }
};
