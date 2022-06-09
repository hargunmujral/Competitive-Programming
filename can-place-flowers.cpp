class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int prev = 0;
        if (flowerbed.size() == 1)
            return flowerbed[0] == 0 || n == 0;
        int cur = flowerbed[0];
        int next = flowerbed[1];
        int count = 0;
        for (int i = 0; i < flowerbed.size() - 1; i++)
        {
            if (prev == 0 && next == 0)
            {
                if (cur == 0)
                    count++;
                flowerbed[i] = 1;
            }
            prev = flowerbed[i];
            cur = flowerbed[i + 1];
            next = flowerbed[i + 2];
            if (count >= n)
                return true;
        }
        if (flowerbed[flowerbed.size() - 2] == 0 && flowerbed.back() == 0)
        {
            if (count == n - 1)
                return true;
        }
        return false;
    }
};