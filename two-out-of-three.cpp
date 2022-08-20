class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
    {
        vector<int> set(301, 0);
        for (const auto &i : nums1)
            set[i] = 1;
        for (const auto &i : nums2)
            set[100 + i] = 1;
        for (const auto &i : nums3)
            set[200 + i] = 1;
        nums1.clear();
        for (int i = 1; i < 101; i++)
            if (set[i] + set[100 + i] + set[200 + i] >= 2)
                nums1.push_back(i);
        return nums1;
    }
};