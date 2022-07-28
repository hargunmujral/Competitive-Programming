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
    int sum = 0;
    int sumNumbers(TreeNode *root)
    {
        sumTree(root, 0);
        return sum;
    }
    void sumTree(TreeNode *node, int rollingSum)
    {
        if (!node)
            return;
        else if (node->left == nullptr && node->right == nullptr)
            sum += node->val + rollingSum * 10;
        else
        {
            sumTree(node->left, node->val + rollingSum * 10);
            sumTree(node->right, node->val + rollingSum * 10);
        }
    }
};