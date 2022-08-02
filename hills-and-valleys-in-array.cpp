class Solution
{
public:
    int countHillValley(vector<int> &nums)
    {
        int count = 0;
        for (int i = 1; i < nums.size() - 1; i++)
        {
            int left = i - 1;
            int right = i + 1;
            while (left > 0 && nums[left] == nums[i])
                left--;
            while (right < nums.size() - 1 && nums[right] == nums[i])
                right++;
            if ((nums[i] > nums[left] && nums[i] > nums[right]) || (nums[i] < nums[left] && nums[i] < nums[right]))
            {
                count++;
            }
            while (i < nums.size() - 1 && nums[i] == nums[i + 1])
                i++;
        }
        return count;
    }
};