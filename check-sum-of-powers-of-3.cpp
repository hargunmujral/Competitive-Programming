class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        if (n % 3 == 2)
            return false;
        while (n /= 3)
        {
            if (n % 3 == 2)
            {
                return false;
            }
        }
        return true;
    }
    bool recurCheckPowersOfThree(int n)
    {
        return n == 0 ? true : n % 3 == 2 ? false
                                          : recurCheckPowersOfThree(n / 3);
    }
};