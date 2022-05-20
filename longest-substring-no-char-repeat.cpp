class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int globalMax = 0;
        vector<int> out(128, 0);
        int track = 0;
        int curr = 0;

        while (curr < s.size())
        {
            if (out.at(s.at(curr)) == 0)
            {
                out.at(s.at(curr))++;
                curr++;
                globalMax = max(globalMax, curr - track);
            }
            else
            {
                out.at(s.at(track))--;
                track++;
            }
        }
        return globalMax;
    }
};