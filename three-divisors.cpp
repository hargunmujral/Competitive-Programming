class Solution
{
public:
    bool isThree(int n)
    {
        int count = 2;
        while (count * count < n)
        {
            if (n % count == 0)
                return false;
            count++;
        }
        return n != 2 && n % count == 0 && count * count == n;
    }
};