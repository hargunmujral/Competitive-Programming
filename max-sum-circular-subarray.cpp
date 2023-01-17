#include <bits/stdc++.h>

class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int globMax = nums[0], globMin = nums[0];
        int rollingMax = 0, rollingMin = 0, total = 0;
        for (const int &i : nums)
        {
            rollingMax = max(rollingMax + i, i);
            globMax = max(globMax, rollingMax);
            rollingMin = min(rollingMin + i, i);
            globMin = min(rollingMin, globMin);
            total += i;
        }
        if (globMax < 0)
            return globMax;
        return max(globMax, total - globMin);
    }
};