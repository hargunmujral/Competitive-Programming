class Solution
{
public:
    int countEven(int num)
    {
        int constNum = num;
        int digits = 0;
        while (num)
        {
            digits += num % 10;
            num /= 10;
        }
        return digits % 2 ? (constNum - 1) / 2 : constNum / 2;
    }
};