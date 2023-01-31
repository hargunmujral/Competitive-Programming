class Solution
{
public:
    int bestTeamScore(vector<int> &scores, vector<int> &ages)
    {
        // map<int, priority_queue<int>> ageToScore;
        // for(int i = 0; i < ages.size(); i++) {
        //     ageToScore[ages[i]].push(scores[i]);
        // }
        // int count = 0;
        // int top = 0;
        // for(auto& i : ageToScore){
        //     if(i.second.top() < top) continue;
        //     while(i.second.size() > 0 && i.second.top() == top) {
        //         count += top;
        //         i.second.pop();
        //     }
        // }
        int n = scores.size();
        vector<pair<int, int>> ageToScore;
        for (int i = 0; i < n; i++)
        {
            ageToScore.push_back(pair<int, int>{ages[i], scores[i]});
        }
        sort(ageToScore.begin(), ageToScore.end());
        vector<int> dp(n, 0);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int score = ageToScore[i].second;
            dp[i] = score;
            for (int j = 0; j < i; j++)
            {
                if (ageToScore[j].second <= score)
                {
                    dp[i] = max(dp[i], dp[j] + score);
                }
            }
            count = max(count, dp[i]);
        }
        return count;
    }
};