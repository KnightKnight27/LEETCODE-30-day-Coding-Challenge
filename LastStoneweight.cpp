class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int,vector<int> > Max(stones.begin(),stones.end());
        while(Max.size()>1)
        {
            int x=Max.top();
            Max.pop();
            int y=Max.top();
            Max.pop();
            if(x==y)
            {
                Max.emplace(0);
                // continue;
            }
            else
                Max.emplace(x-y);
        }
        return Max.top();
    }
};
