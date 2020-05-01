class Solution {
public:
    bool backspaceCompare(string a, string T) 
    {
        string A="";
        string B="";
        stack<char> S;
        for(auto it:a)
        {
            if(it!='#')
                S.push(it);
            else
            {
                if(!S.empty())
                {
                    S.pop();
                }
            }
        }
        while(!S.empty())
        {
            A=A+S.top();
            S.pop();
        }
        for(auto it:T)
        {
            if(it!='#')
                S.push(it);
            else
            {
                if(!S.empty())
                {
                    S.pop();
                }
            }
        }
        while(!S.empty())
        {
            B=B+S.top();
            S.pop();
        }
        if(A==B)return true;
        return false;
    }
};
