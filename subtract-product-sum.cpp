class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        vector<int> out;
        while (n > 0)
        {
            out.push_back(n % 10);
            n /= 10;
        }
        int product = 1;
        int sum = 0;
        for (auto i : out)
        {
            product *= i;
            sum += i;
        }
        return product - sum;
    }
};