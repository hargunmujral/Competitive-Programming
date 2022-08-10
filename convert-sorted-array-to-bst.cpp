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
    TreeNode *helper(vector<int> &nums, int begin, int end)
    {
        if (end <= begin)
            return nullptr;
        int midIndex = (begin + end) / 2;
        TreeNode *head = new TreeNode(nums[midIndex]);
        head->left = helper(nums, begin, midIndex);
        head->right = helper(nums, midIndex + 1, end);
        return head;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return helper(nums, 0, nums.size());
    }
};
