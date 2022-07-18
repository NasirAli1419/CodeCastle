   int getMaxPathSum(TreeNode* root , int &maxSum){
        if(!root){
            return 0;
        }
        int lh = max(0,getMaxPathSum(root->left,maxSum));
        int rh = max(0,getMaxPathSum(root->right,maxSum));
        maxSum = max(maxSum,root->val+lh+rh);
        return root->val+max(lh,rh);
        
    }
    int maxPathSum(TreeNode* root) {
        
        int maxSum = INT_MIN;
        getMaxPathSum(root,maxSum);
        return maxSum;
       
    }