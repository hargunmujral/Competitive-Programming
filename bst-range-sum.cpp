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
    // this is a helper function that adds the value of any nodes that fit the restriction to the sum
    void traverse(int &out, TreeNode *root, const int low, const int high)
    {
        // this is the base case
        if (root == nullptr)
            return;
        // We recursively call a left traverse, making sure that we end up at the leftmost node in each iteration
        traverse(out, root->left, low, high);
        // if the current node is within the range, we add it to the sum
        if (low <= root->val && high >= root->val)
            out += root->val;
        // We recursively call a right traverse, that will continue to go as left as possible to maintain order
        traverse(out, root->right, low, high);
    }
    // This function simply calls the helper and returns the sum
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int i = 0;
        traverse(i, root, low, high);
        return i;
    }
};