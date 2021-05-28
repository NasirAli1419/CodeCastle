//link for problem ->  https://leetcode.com/problems/binary-tree-preorder-traversal/

    
   void traversal(TreeNode* root,vector<int> &preorderOutput){
        
        if(root==NULL){
            return ;
        }
        
        preorderOutput.push_back(root->val);
        traversal(root->left,preorderOutput);
        traversal(root->right,preorderOutput);
        
    }
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> preorderOutput;
        
        traversal(root,preorderOutput);
        
        return preorderOutput;
        
    }