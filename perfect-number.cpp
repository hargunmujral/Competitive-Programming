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
    bool checkPerfectNumberOptimized(int num) {
        int constNum = num;
        for (int i = 1; i * i <= constNum; i++)
            if (constNum % i == 0)
                (num -= i) -= (i * i != constNum) ? (constNum / i) : 0;
        return num == -constNum;
    }
};