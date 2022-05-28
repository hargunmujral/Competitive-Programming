class Solution
{
public:
    bool checkTree(TreeNode *root)
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