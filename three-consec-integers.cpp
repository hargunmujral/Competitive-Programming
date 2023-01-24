class Solution
{
public:
    vector<long long> sumOfThree(long long num)
    {
        long long third = num / 3;
        return (third * 3 == num) ? vector<long long>{third - 1, third, third + 1} : vector<long long>{};
    }
};