class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        float angHour = (hour % 12 + (float)minutes / 60) * 30;
        float angMin = minutes * 6;
        // cout << angHour << " " << angMin << endl;
        float res = min(abs(angHour - angMin), abs(angMin - angHour));
        return min(res, 360 - res);
    }
};