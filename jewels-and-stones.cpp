class Solution
{
public:
    class Solution
    {
    public:

        // more memory efficient solution, O(n*m) time

        // int numJewelsInStones(string jewels, string stones) {
        //     int out = 0;
        //     for(const auto& i : jewels){
        //         out += count(stones.begin(), stones.end(), i);
        //     }
        //     return out;
        // }

        // more time efficient, O(n) + O(m) time
        int numJewelsInStones(string jewels, string stones)
        {
            int out = 0;
            unordered_set<int> set(jewels.begin(), jewels.end());
            for (const auto &j : stones)
            {
                if (set.count(j))
                    out++;
            }
            return out;
        }
    };
};