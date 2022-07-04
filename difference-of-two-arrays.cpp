class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        for (const auto &i : nums1)
            if (count(nums2.begin(), nums2.end(), i))
                set1.erase(i);
        for (const auto &i : nums2)
            if (count(nums1.begin(), nums1.end(), i))
                set2.erase(i);
        vector<int> out1(set1.begin(), set1.end());
        vector<int> out2(set2.begin(), set2.end());
        return {out1, out2};
    }
};