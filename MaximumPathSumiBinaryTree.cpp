class Solution 
{
    int helper(TreeNode *root,int &ans)
    {
        if(root==NULL)
            return 0;
        int left=helper(root->left,ans);
        int right=helper(root->right,ans);
        int single=max(max(left,right)+root->val,root->val);
        int top=max(single,left+right+root->val);
        ans=max(ans,top);
        return single;
    }
    public:
    int maxPathSum(TreeNode* root)
    {
        int ans=INT_MIN;
        helper(root,ans);
        return ans;
    }
};
