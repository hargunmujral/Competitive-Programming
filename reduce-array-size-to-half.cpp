class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        unordered_map<int, int> intMap;
        int size = arr.size();
        for (int i = 0; i < arr.size(); i++)
            intMap[arr[i]]++;
        priority_queue<int> values;
        for (const auto &s : intMap)
            values.push(s.second);
        int iter = 1;
        while (size > arr.size() / 2 && iter++)
        {
            size -= values.top();
            values.pop();
        }
        return iter - 1;
    }
};