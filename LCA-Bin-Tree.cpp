/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* lowest = root;
        while(true){
            if(hasChild(lowest->left, p) && hasChild(lowest->left, q)){
                lowest = lowest->left;
            }
            else if(hasChild(lowest->right, p) && hasChild(lowest->right, q)){
                lowest = lowest->right;
            }
            else{
                return lowest;
            }
        }
        
    }
    
    bool hasChild(TreeNode* root, TreeNode* child){
        if(root == child) return true;
        if(root == nullptr) return false;
        if(root->left == nullptr && root->right == nullptr) return false;
        return hasChild(root->left, child) || hasChild(root->right, child);
    }
};