#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> out;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i+1; j < nums.size(); j++){
//                 if(nums.at(i) + nums.at(j) == target){
//                     out.push_back(i);
//                     out.push_back(j);
//                     return out;
//                 }
//             }
//         }
//         return out;
        vector<int> out;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); ++i){
            if(map.count(target - nums.at(i))){
                out.emplace_back(i);
                out.emplace_back(map.at(target - nums.at(i)));
            }
            else{
                map.emplace(nums.at(i), i);
            }
        }
        return out;
    }
};