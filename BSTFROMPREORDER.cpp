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
    TreeNode * helper(int start,int end,vector<int> arr)
    {
        if(start>end)
            return NULL;
        TreeNode * temp=new TreeNode(arr[start]);
        int index;
        for(int i=start+1;i<=end;i++)
        {
            if(arr[i]>arr[start])
            {
                index=i;
                break;
            }
        }
        temp->left=helper(start+1,index-1,arr);
        temp->right=helper(index,end,arr);
        return temp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder)
    {
        int n=preorder.size();
        return helper(0,n-1,preorder);
    }
};
