class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        float angHour = (hour % 12 + (float)minutes / 60) * 30;
        float angMin = minutes * 6;
        float res = abs(angHour - angMin);
        return min(res, 360 - res);
    }
};