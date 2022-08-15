class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int left = 1, right = pow(10, 6), sum = 0, mid;
        while (left < right && !(sum = 0) && (mid = (left + right) / 2))
        {
            for (const auto &i : nums)
                sum += i / mid + (i % mid != 0);
            sum > threshold ? left = mid + 1 : right = mid;
        }
        return left;
    }
};