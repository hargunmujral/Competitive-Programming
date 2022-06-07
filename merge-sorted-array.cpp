class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        auto c = find(nums1.begin(), nums1.end(), 0);
        nums1.erase(c, c + nums2.size());
    }
};