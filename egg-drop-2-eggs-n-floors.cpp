class Solution
{
public:
    int twoEggDrop(int n)
    {
        int count = 1;
        while (count * (count + 1) / 2 < n)
            count++;
        return count;
    }
};