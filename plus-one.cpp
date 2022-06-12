class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int i = digits.size() - 1;
        digits[i]++;
        while (i > 0 && digits[i] > 9)
        {
            digits[i - 1]++;
            digits[i--] = 0;
        }
        if (digits[0] == 10)
        {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};