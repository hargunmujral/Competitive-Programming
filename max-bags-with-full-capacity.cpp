class Solution
{
public:
    int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
    {
        for (int i = 0; i < rocks.size(); i++)
        {
            capacity[i] -= rocks[i];
        }
        sort(capacity.begin(), capacity.end());
        int count = 0, index = 0;
        while (index < capacity.size() && additionalRocks - capacity[index] >= 0)
        {
            additionalRocks -= capacity[index];
            count++;
            index++;
        }
        return count;
    }
};