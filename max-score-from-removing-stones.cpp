class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        int mm = max(max(a, b), c);
        int mn = min(min(a, b), c);
        int md = a + b + c - mm - mn;
        return mm >= mn + md ? mn + md : max(mm, mm + (mn + md - mm) / 2);
    }
};