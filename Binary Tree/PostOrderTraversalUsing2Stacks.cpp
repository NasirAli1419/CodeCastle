//link for problem ->  https://leetcode.com/problems/binary-tree-postorder-traversal/

    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> postorderOutput;
        stack<TreeNode*> stack1;
        stack<TreeNode*> stack2;
        if(!root){return postorderOutput;}
        stack1.push(root);
        
        while(!stack1.empty()){
            
            root = stack1.top();
            stack1.pop();
            stack2.push(root);
            
            if(root->left){
                stack1.push(root->left);
            }
            if(root->right){
                stack1.push(root->right);
            }
            
        }
        
        while(!stack2.empty()){
            postorderOutput.push_back(stack2.top()->val);
            stack2.pop();
        }
        
        
        return postorderOutput;
    }