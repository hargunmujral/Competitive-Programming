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
    void traversal(vector<vector<int>> &out, TreeNode *root, int nodeHeight)
    {
        if (root == nullptr)
            return;
        if (nodeHeight >= out.size())
            out.push_back(vector<int>());
        traversal(out, root->left, 1 + nodeHeight);
        out.at(nodeHeight).push_back(root->val);
        traversal(out, root->right, 1 + nodeHeight);
    }
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> out;
        int nodeHeight = 0;
        traversal(out, root, nodeHeight);
        return out;
    }
};