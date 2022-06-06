class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string out = "";
        if (count(strs.begin(), strs.end(), ""))
            return "";
        int it = 0;
        char common = strs.at(0).at(it);
        while (true)
        {
            for (string &i : strs)
            {
                if (it >= i.size() || i.at(it) != common)
                    return out;
            }
            out.push_back(common);
            if (strs.at(0).size() - 1 == it)
                return out;
            common = strs.at(0).at(++it);
        }
        return out;
    }
};
