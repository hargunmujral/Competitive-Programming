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
    vector<int> vals;
    int checkDif(vector<int> vals)
    {
        int dif = INT_MAX;
        for (int i = 0; i + 1 < vals.size(); i++)
            dif = min(dif, vals[i + 1] - vals[i]);
        return dif;
    }
    int minDiffInBST(TreeNode *root)
    {
        if (!root)
            return 0;
        minDiffInBST(root->left);
        vals.push_back(root->val);
        minDiffInBST(root->right);
        return checkDif(vals);
    }
};