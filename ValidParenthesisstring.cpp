class Solution {
public:
    bool checkValidString(string s) 
    {
        int count=0;
        int ast=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                count++;
            else if(s[i]==')')
                count--;
            else
                ast++;
            if(count+ast<0)
                return false;
        }
        count=0;
        ast=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==')')
                count++;
            else if(s[i]=='(')
                count--;
            else
                ast++;
            if(count+ast<0)
                return false;
        }
        return true;
    }
};
