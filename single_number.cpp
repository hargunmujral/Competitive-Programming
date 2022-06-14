class Solution
{
public:
    // less optimized
    int singleNumber(vector<int> &nums)
    {
        unordered_set<int> set;
        int sum = 0;
        for(const auto& i : nums){
            if(set.find(i) == set.end()){
                set.insert(i);
                sum += i;
            } else{
                sum -= i;
            }
        }
        return sum;
    }
    // second attempt at a better solution
    int singleNumberOptimized(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i = i + 2)
        {
            if (nums[i] != nums[i - 1])
                return nums[i - 1];
        }
        return nums.back();
    }
};