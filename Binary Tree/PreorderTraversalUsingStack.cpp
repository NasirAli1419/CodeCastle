//link for problem ->  https://leetcode.com/problems/binary-tree-preorder-traversal/

    
  vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> preorderOutput;
        stack<TreeNode*> tree;
        
        if(!root) return preorderOutput;
        
        tree.push(root);
        
        while(!tree.empty()){
            
            TreeNode* node = tree.top();
            tree.pop();
            
            preorderOutput.push_back(node->val);
            
            if(node->right) tree.push(node->right);
            if(node->left)  tree.push(node->left);
            
        }
        
        return preorderOutput;
        
    }