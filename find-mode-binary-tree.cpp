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
    void traversal(map<int, int> &map, TreeNode *root)
    {
        if (!root)
            return;
        traversal(map, root->left);
        map[root->val]++;
        traversal(map, root->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        map<int, int> map;
        traversal(map, root);
        vector<int> out;
        int maxVal = 0;
        for (const auto &[key, value] : map)
        {
            if (value > maxVal)
            {
                out.clear();
                maxVal = value;
                out.push_back(key);
            }
            else if (value == maxVal)
                out.push_back(key);
        }
        return out;
    }
};