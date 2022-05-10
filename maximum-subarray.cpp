class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums.at(0);
        int maxsum = sum;
        
        for(int i = 1; i < nums.size(); ++i){
            sum = max(nums.at(i), sum + nums.at(i));
            maxsum = max(maxsum, sum);            
        }
        return maxsum;
    }
};
