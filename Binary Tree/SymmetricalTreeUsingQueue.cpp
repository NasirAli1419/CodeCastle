//link for problem ->  https://leetcode.com/problems/symmetric-tree/

    
  bool isSymmetric(TreeNode* root) {
        
      if(!root) return false;  
        
      queue<TreeNode*> q;
      q.push(root);
      q.push(root);  
        
      while(!q.empty()){
          TreeNode* t1 = q.front();
          q.pop();
          TreeNode* t2 = q.front();
          q.pop();
          
          if(t1==NULL&&t2==NULL) continue;
          if(t1==NULL||t2==NULL) return false;
          if(t1->val!=t2->val) return false;
          
          q.push(t1->left);
          q.push(t2->right);
          q.push(t1->right);
          q.push(t2->left);
          
      }  
        
       return true; 
    }