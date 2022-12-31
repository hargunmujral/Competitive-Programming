class Solution
{
public:
    int minFlips(int a, int b, int c)
    {
        // int d = (a | b) & ~c;
        int mm = max(max(a, b), c);
        int div = 2;
        int count = 0;
        while (div < mm)
            div *= 2;
        while (div)
        {
            if (!(div & c))
            {
                if (div & a)
                    count++;
                if (div & b)
                    count++;
            }
            else
            {
                if (!(div & a) && !(div & b))
                    count++;
            }
            div /= 2;
        }
        return count;
    }
};
/*
    a = 010
    b = 110
    a | b = 110
    c = 101
*/