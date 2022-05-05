class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int purchase = prices.at(0);
        int dif = 0;
        for(int i = 0; i < prices.size(); ++i){
            purchase = min(purchase, prices.at(i));
            dif = max(dif, prices.at(i) - purchase);   
        }
            return dif;
    }
};