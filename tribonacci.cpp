class Solution
{
public:
    int tribonacci(int n)
    {
        if (n == 0 || n == 1)
            return n;
        if (n == 2 || n == 3)
            return n - 1;
        int left3 = 1;
        int left2 = 1;
        int left1 = 2;
        int cur = 4;
        for (int i = 4; i < n; i++)
        {
            left3 = left2;
            left2 = left1;
            left1 = cur;
            cur = left1 + left2 + left3;
        }
        return cur;
    }
};