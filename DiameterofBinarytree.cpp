/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode *root,int &ans)
    {
        if(root==NULL)
            return 0;
        int left=helper(root->left,ans);
        int right=helper(root->right,ans);
        ans=max(ans,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int ans=INT_MIN;
        helper(root,ans);
        return ans;
    }
};
