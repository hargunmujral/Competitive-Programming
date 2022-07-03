class Solution
{
public:
    int iterate(vector<char> input, char find)
    {
        int i = 0;
        while (input[i] != find)
            i++;
        return i;
    }
    string decodeMessage(string key, string message)
    {
        vector<char> keys;
        for (int i = 0; i < key.size(); i++)
        {
            if (count(keys.begin(), keys.end(), key[i]) || key[i] == 32)
                continue;
            keys.push_back(key[i]);
            if (keys.size() == 26)
                break;
        }
        for (char &i : message)
        {
            if (i == 32)
                continue;
            i = iterate(keys, i) + 'a';
        }
        return message;
    }
};