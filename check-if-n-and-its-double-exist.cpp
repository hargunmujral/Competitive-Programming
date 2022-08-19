class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        unordered_set<int> set;
        for (const auto &i : arr)
        {
            if (i / 2 * 2 == i && set.count(i / 2) || set.count(2 * i))
                return true;
            set.insert(i);
        }
        return false;
    }
};