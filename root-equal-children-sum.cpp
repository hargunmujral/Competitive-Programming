class Solution
{
public:

    // For a tree with only three nodes, root, root->left and root->right
    bool checkTreeSmall(TreeNode *root)
    {
        return (root->val == root->left->val + root->right->val);
    }

    // For a tree of any size
    bool checkTreeBig(TreeNode *root)
    {
        int out = 0;
        traversal(root, out);
        if (out == 2 * root->val)
            return true;
        return false;
    }
    void traversal(TreeNode *root, int &out)
    {
        if (root == nullptr)
            return;
        traversal(root->left, out);
        out += root->val;
        traversal(root->right, out);
    }
};