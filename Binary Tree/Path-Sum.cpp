//link for problem ->  https://leetcode.com/problems/path-sum/

    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(!root){
            return false;
        }
     
        bool ans = false;
        
        int subtreeSum = targetSum - root->val;
        
        if(subtreeSum==0 && !root->left && !root->right){
            return true;
        }
        
        if(root->left){
            ans = ans||hasPathSum(root->left,subtreeSum);
        }
        if(root->right){
             ans = ans||hasPathSum(root->right,subtreeSum);
        }
    
        return ans;
    }