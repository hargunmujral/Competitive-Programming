class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int constNum = num;
        for (int i = num / 2; i > 0; i--)
        {
            if ((constNum % i == 0))
                num -= i;
        }
        return num == 0;
    }
};