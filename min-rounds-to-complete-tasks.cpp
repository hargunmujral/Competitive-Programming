class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        map<int, int> mp;
        for (int i = 0; i < tasks.size(); i++)
        {
            mp[tasks[i]]++;
        }
        int count = 0;
        for (auto i : mp)
        {
            if (i.second == 1)
                return -1;
            if (i.second % 3 != 0)
                count++;
            count += i.second / 3;
        }
        return count;
    }
};