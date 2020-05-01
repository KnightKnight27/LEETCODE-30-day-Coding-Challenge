class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        map<string,vector<string> > hash;
        for(int i=0;i<strs.size();i++)
        {
            string Z=strs[i];
            sort(Z.begin(),Z.end());
            hash[Z].push_back(strs[i]);
        }
        vector<vector<string> > ans;
        for(auto it=hash.begin();it!=hash.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};
