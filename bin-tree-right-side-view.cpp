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
class Solution {
public:
    void addToVector(vector<int>& out, TreeNode* root, int size) {
        if(!root) return;
        if(size == out.size()) out.push_back(root->val);
        addToVector(out, root->right, size+1);
        addToVector(out, root->left, size+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> out;
        addToVector(out, root, 0);
        return out;
    }
};