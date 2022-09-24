class Solution
{
public:
    int reachNumber(int target)
    {
        int val = abs(target);
        int count = 0;
        while (val > 0)
            val -= ++count;
        // return count;
        return (val % 2 == 0) ? count : count + 1 + (count % 2);
    }
};