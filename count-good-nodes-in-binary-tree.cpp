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
    int goodNodes(TreeNode *root)
    {
        return solveTree(root, -INT_MAX + 1);
    }
    int solveTree(TreeNode *root, int val)
    {
        return nullptr == root ? 0 : (root->val >= val) + solveTree(root->left, max(val, root->val)) + solveTree(root->right, max(val, root->val));
    }
};
