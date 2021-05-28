//link for problem ->  https://leetcode.com/problems/binary-tree-inorder-traversal/

    
    void inorderTraversal(TreeNode *root , vector<int> &inorderOutput){
        
        if(!root) return ;
        
        inorderTraversal(root->left,inorderOutput);
        inorderOutput.push_back(root->val);
        inorderTraversal(root->right,inorderOutput);
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> inorderOutput;
        
        inorderTraversal(root,inorderOutput);
        
        return inorderOutput;
        
        
    }