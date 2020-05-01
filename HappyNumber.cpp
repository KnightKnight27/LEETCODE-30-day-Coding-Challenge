class Solution {
public:
    int sum(int n)
    {
        int sum=0;
        while(n)
        {
            int x=n%10;
            sum+=x*x;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        int slow=n;
        int fast=sum(n);
        while(slow!=fast)
        {
            slow=sum(slow);
            fast=sum(sum(fast));
        }
        if(slow==1)
            return true;
        else
            return false;
    }
};
