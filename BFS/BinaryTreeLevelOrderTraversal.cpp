//link for problem ->  https://leetcode.com/problems/binary-tree-level-order-traversal/

    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        queue<TreeNode*> q;
        
        if(!root) return result;
        q.push(root);
        
        while(!q.empty()){
            
            vector<int> currentLevel;
            int size= q.size();
            
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                currentLevel.push_back(temp->val);
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            
            result.push_back(currentLevel);
            
        }
        
        return result;
        
    }