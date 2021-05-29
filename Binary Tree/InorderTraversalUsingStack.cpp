//link for problem ->  https://leetcode.com/problems/binary-tree-inorder-traversal/

    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> inorderOutput;
        stack<TreeNode*> tree;
        
        if(!root) return inorderOutput;
        
        TreeNode* current = root;
        
        while(current!=NULL||!tree.empty()){
            
            while(current!=NULL){
                tree.push(current);
                current=current->left;
            }
            
            current=tree.top();
            tree.pop();
            inorderOutput.push_back(current->val);
            current=current->right;
            
        }
        
        return inorderOutput;
        
    }  
    }