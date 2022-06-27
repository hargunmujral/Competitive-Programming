class Solution
{
public:
    string makeGood(string s)
    {
        int count = 1;
        while (count)
        {
            count = 0;
            int size = s.size();
            for (int i = 0; i < size - 1; i++)
            {
                const int dif = s[i] - s[i + 1];
                if (dif == 32 || dif == -32)
                {
                    count++;
                    s.erase(i, 2);
                    size -= 2;
                }
            }
        }
        return s;
    }
};