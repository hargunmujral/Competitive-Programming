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
    int heightOf(TreeNode *root)
    {
        if (root == nullptr)
            return -1;
        return 1 + max(heightOf(root->left), heightOf(root->right));
    }
    void traverse(TreeNode *root, int &sum, const int height, int counter)
    {
        if (root == nullptr)
            return;
        traverse(root->left, sum, height, counter + 1);
        if (counter == height)
            sum += root->val;
        traverse(root->right, sum, height, counter + 1);
    }
    int deepestLeavesSum(TreeNode *root)
    {
        int sum = 0;
        int counter = 0;
        traverse(root, sum, heightOf(root), counter);
        return sum;
    }
};