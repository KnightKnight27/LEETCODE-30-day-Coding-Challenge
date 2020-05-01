class Solution {
public:
    int rangeBitwiseAnd(int m, int n) 
    {
        int s=0;
        while(m!=n)
        {
            m=m/2;
            n=n/2;
            s++;
        }
        return m<<s;
    }
};
