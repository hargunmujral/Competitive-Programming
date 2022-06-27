class Solution
{
public:
    vector<string> divideString(string s, int k, char fill)
    {
        vector<string> out;
        if (s.size() % k)
        {
            string add(k - s.size() % k, fill);
            s = s + add;
        }
        for (int i = 0; i < s.size(); i += k)
        {
            out.push_back(s.substr(i, k));
        }
        return out;
    }
};