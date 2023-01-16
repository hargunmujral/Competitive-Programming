#include <bits/stdc++.h>
class Solution
{
public:
    bool reorderedPowerOf2(int n)
    {
        string res = sorter(n);
        for (int i = 0; i < 32; i++)
        {
            if (res == sorter(1 << i))
                return true;
        }
        return false;
    }

    string sorter(int n)
    {
        string res = to_string(n);
        sort(res.begin(), res.end());
        return res;
    }
};
