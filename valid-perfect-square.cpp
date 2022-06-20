class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return true;
        int min = 0;
        long max = num;
        long mid = (min + max) / 2;
        while (min < max)
        {
            long result = mid * mid;
            if (result == num)
                return true;
            if (result < num)
                min = mid + 1;
            if (result > num)
                max = mid;
            mid = (min + max) / 2;
        }
        return false;
    }
};