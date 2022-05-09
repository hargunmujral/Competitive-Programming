class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size() -1;
        int guess = (max) / 2;
        while(target != nums.at(guess)){
            if(min >= max) return -1;
            else if(nums.at(guess) < target){
                min = guess + 1;   
            }
            else if(nums.at(guess) > target){
                max = guess - 1;
            }
            guess = (max + min) / 2;
        }
        return guess;
    }
};