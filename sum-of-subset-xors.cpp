class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int out = 0;
        for(const int& i : nums) out |= i;
        return (out << (nums.size() - 1));
    }
};