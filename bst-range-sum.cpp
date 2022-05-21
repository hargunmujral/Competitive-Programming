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
    void traverse(int &out, TreeNode *root, const int low, const int high)
    {
        if (root == nullptr)
            return;
        traverse(out, root->left, low, high);
        if (low <= root->val && high >= root->val)
            out += root->val;
        traverse(out, root->right, low, high);
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int i = 0;
        traverse(i, root, low, high);
        return i;
    }
};