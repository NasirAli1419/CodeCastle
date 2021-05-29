//link for problem ->  https://leetcode.com/problems/binary-tree-postorder-traversal/

    
 vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> postorderOutput;
        stack<TreeNode*> stack;
        TreeNode* current = root;
        
        while(current!=NULL || !stack.empty()){
            
            if(current!=NULL){
                stack.push(current);
                current=current->left;
            }
            else{
                TreeNode* temp = stack.top()->right;
                if(temp==NULL){
                    temp=stack.top();
                    stack.pop();
                    postorderOutput.push_back(temp->val);
                    
                    while(!stack.empty()&&stack.top()->right==temp){
                        temp=stack.top();
                        stack.pop();
                        postorderOutput.push_back(temp->val);
                    }
                    
                }
                else{
                    current=temp;
                }
                
            }       
        }     
        return postorderOutput;
    }