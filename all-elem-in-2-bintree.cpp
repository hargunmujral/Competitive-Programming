/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <algorithm>

class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> out;
        returnAll(out, root1);
        returnAll(out, root2);
        sort(out.begin(), out.end());
        return out;
        
    }
    
    void returnAll(vector<int>& v, TreeNode* tree){
        if (tree == nullptr) return;
        TreeNode* cur = tree;
        returnAll(v, cur->left);
        v.push_back(cur->val);
        returnAll(v, cur->right);
        return;
    }
};