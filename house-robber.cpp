class Solution
{
public:
    int rob(vector<int> &nums)
    {
        // vector<int> dp(102);
        // for(int i = 0; i < nums.size(); i++) {
        //     dp[i+2] = max(nums[i] + dp[i], dp[i+1]);
        // }
        // return dp[nums.size()+1];
        int point1 = 0;
        int point2 = 0;
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            res = max(point1 + nums[i], point2);
            point1 = point2;
            point2 = res;
        }
        return res;
    }
};