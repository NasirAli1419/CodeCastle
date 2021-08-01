//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> output;
        
        if(!root) return output;
        
        queue<TreeNode*> q;
        stack<int> s;
        stack<int> levels;
        
        q.push(root);
        
        while(!q.empty()){
            
            int size = q.size();
            levels.push(size);
            for(int i=0;i<size;i++){
                TreeNode * current = q.front();
                s.push(current->val);
                q.pop();
                if(current->right){
                q.push(current->right);
                }
                if(current->left){
                    q.push(current->left);
                }
            }
            
        }
        
        while(!levels.empty()){
            
            int level = levels.top();
            levels.pop();
            vector<int> row;
            
            while(level--){
                
                row.push_back(s.top());
                s.pop();
                
            }
         
            output.push_back(row);
        }
        
        return output;
    }
};
