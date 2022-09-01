class Solution {
public:
    int arraySign(vector<int>& nums) {
        int flag = 1;
        for(const auto& i : nums){
            if(!i) return 0;
            flag *= i>0 ? 1 : -1;
        }
        return flag;
    }
};