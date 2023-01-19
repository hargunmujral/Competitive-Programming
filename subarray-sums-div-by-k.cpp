#include <vector>
#include <iostream>

class Solution
{
public:
    int sumUpTo(int n)
    {
        return (n * (n - 1)) / 2;
    }

    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size();
        nums[0] = (nums[0] % k + k) % k;
        int count = nums[0] == 0;
        vector<int> modMap(k, 0);
        modMap[nums[0]]++;
        for (int i = 1; i < n; i++)
        {
            nums[i] = (nums[i] % k + (nums[i - 1]) % k + 2 * k) % k;
            count += nums[i] == 0;
            modMap[nums[i]]++;
        }
        for (int i = 0; i < k; i++)
        {
            if (modMap[i] > 1)
                count += (modMap[i] * (modMap[i] - 1)) / 2;
        }
        return count;
    }
};