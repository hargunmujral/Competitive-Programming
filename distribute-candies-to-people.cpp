class Solution
{
public:
    vector<int> distributeCandies(int candies, int num_people)
    {
        vector<int> dist(num_people, 0);
        int i = 0, count = 1;
        while (candies > 0)
        {
            dist[i++ % num_people] += min(candies, count);
            candies -= count++;
        }
        return dist;
    }
};