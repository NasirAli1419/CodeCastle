//link for problem ->  https://leetcode.com/problems/binary-tree-preorder-traversal/

    
    vector<int> preorderTraversal(TreeNode* root) {
        
       vector<int> inorderMorris;
       
        TreeNode* current = root;
        
        while(current!=NULL){
            
            if(!current->left){
                inorderMorris.push_back(current->val);
                current=current->right;
            }
            else{
                
                TreeNode* predecessor = current->left;

                while(predecessor->right!=current && predecessor->right!=NULL ){
                    
                    predecessor=predecessor->right;
                    
                }
                
                if(predecessor->right==NULL){
                    predecessor->right=current;
                    inorderMorris.push_back(current->val);
                    current=current->left;
                }
                else{
                    predecessor->right=NULL;
                    current=current->right;
                }
                
            }
            
        }
        
        return inorderMorris;
        
    }