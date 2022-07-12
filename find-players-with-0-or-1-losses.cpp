class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_set<int> losers;
        unordered_set<int> outLosers;
        unordered_set<int> winners;
        for(int i = 0; i < matches.size(); i++){
            winners.insert(matches[i][0]);
            outLosers.insert(matches[i][1]);
            if(losers.count(matches[i][1]))
                outLosers.erase(matches[i][1]);
            losers.insert(matches[i][1]);
        }
        for(const auto& i : losers) winners.erase(i);
        vector<vector<int>> out;
        vector<int> winnerV(winners.begin(), winners.end());
        vector<int> outLosersV(outLosers.begin(), outLosers.end());
        sort(winnerV.begin(), winnerV.end());
        sort(outLosersV.begin(), outLosersV.end());
        return {winnerV, outLosersV};
    }
};