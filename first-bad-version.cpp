// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long min = 1;
        long max = n;
        long mid = (max + min) / 2;

        while (min < max)
        {
            if (!isBadVersion(mid))
                min = mid + 1;
            else
                max = mid;
            mid = (max + min) / 2;
        }
        return mid;
    }
};