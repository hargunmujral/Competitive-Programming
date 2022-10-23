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
    int average(TreeNode *root)
    {
        return !root ? 0 : root->val + average(root->left) + average(root->right);
    }
    int numNodes(TreeNode *root)
    {
        return !root ? 0 : 1 + numNodes(root->left) + numNodes(root->right);
    }
    int averageOfSubtree(TreeNode *root)
    {
        return !root ? 0 : (root->val == (average(root) / numNodes(root))) + averageOfSubtree(root->left) + averageOfSubtree(root->right);
    }
};