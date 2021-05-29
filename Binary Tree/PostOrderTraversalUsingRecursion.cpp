//link for problem ->  https://leetcode.com/problems/binary-tree-postorder-traversal/

    
    void traversal(TreeNode* root,vector<int> &output){
        
        if(!root){
            return;
        }
        
        traversal(root->left,output);
        traversal(root->right,output);
        output.push_back(root->val);
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> postorderOutput;
        
        traversal(root,postorderOutput);
        
        return postorderOutput;
    }