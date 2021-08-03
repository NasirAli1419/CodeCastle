// https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root){
            
            invertTree(root->left);
            invertTree(root->right);
            TreeNode* temp = root->left;
            root->left=root->right;
            root->right = temp ;
        }
        
        return root;
        
    }
};
