class Solution
{
public:
    bool digitCheck(int num)
    {
        int constNum = num;
        while (num)
        {
            if (!(num % 10) || constNum % (num % 10))
                return false;
            num /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> res;
        for (int i = left; i <= right; i++)
        {
            if (digitCheck(i))
                res.push_back(i);
        }
        return res;
    }
};