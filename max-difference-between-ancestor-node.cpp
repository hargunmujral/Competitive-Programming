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
class Solution
{
public:
    int maxAncestorDiff(TreeNode *root, int mn = INT_MAX, int mx = INT_MIN)
    {
        return !root ? mx - mn : max(maxAncestorDiff(root->left, min(mn, root->val), max(mx, root->val)), maxAncestorDiff(root->right, min(mn, root->val), max(mx, root->val)));
        /*
            if(!root) return mx-mn;
            mx = max(mx, root->val);
            mn = min(mn, root->val);
            return max(maxAncestorDiff(root->left, mn, mx), maxAncestorDiff(root->right, mn, mx));
        */
    }
};