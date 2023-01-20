#include <vector>
class Solution
{
public:
    // vector<vector<int>> res;
    // set<vector<int>> found;
    // vector<vector<int>> findSubsequences(vector<int>& nums) {
    //     if(found.contains(nums)) return res;
    //     found.insert(nums);
    //     if(nums.size() <= 1) return res;
    //     // vector<vector<int>> subseqs;
    //     int min = nums[0];
    //     vector<int> cur{min};
    //     for(int i = 1; i < nums.size(); i++){
    //         if(cur.size() == 0 || cur.back() <= nums[i]) cur.emplace_back(nums[i]);
    //         else if(cur.size() == 1) cur = {nums[i]};
    //         else{
    //             cur.emplace_back(nums[i]);
    //             findSubsequences(cur);
    //             res.emplace_back(cur);
    //             cur = { nums[i] };

    //         }
    //     }
    //     return res;
    // }
    vector<vector<int>> findSubsequences(vector<int> &nums)
    {
        set<vector<int>> res;
        int n = nums.size();
        int bitmask = -1;
        while (++bitmask < (1 << n))
        {
            vector<int> temp;
            for (int i = 0; i < n; i++)
            {
                if (bitmask & (1 << i))
                    temp.push_back(nums[i]);
            }
            if (temp.size() > 1 && is_sorted(temp.begin(), temp.end()))
            {
                res.insert(temp);
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};
