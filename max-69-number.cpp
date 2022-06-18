class Solution
{
public:
    int maximum69Number(int num)
    {
        string out = to_string(num);
        for (auto &i : out)
        {
            if (i == '6')
            {
                i = '9';
                return stoi(out);
            }
        }
        return num;
    }
};