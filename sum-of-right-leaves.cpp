/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int solve(Tree *root)
{
    return !root ? 0 : root->right && !root->right->left && !root->right->right ? root->right->val + solve(root->left) + solve(root->right) : solve(root->left) + solve(root->right);
}