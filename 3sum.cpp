#include <unordered_map>
#include <algorithm>
#include <set>

class Solution {
public:
     vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3) return {};
        sort(nums.begin(), nums.end());
        set<vector<int>> out;
        for(int i = 0; i < nums.size() - 2; i++){
            int start = i+1;
            int end = nums.size() - 1;
            while(start < end){
                if(nums.at(start)+ nums.at(i)+ nums.at(end)==0){
                    if(i != end){
                         if(out.find({nums.at(start), nums.at(i), nums.at(end)})==out.end())
                            out.insert({nums.at(start), nums.at(i), nums.at(end)});
                        
                     }
                    start++;
                    end--;
                }
                else if(nums.at(start)+ nums.at(i)+ nums.at(end)>0){
                     end--;
                } else{
                     start++;
                }
            }

        }
         vector<vector<int>> v;
         for(const auto& i: out){
             v.push_back(i);
         }
         return v;
    }
};
  
    
    
    
// class Solution {
// public:
//     vector<int> twoSum(const vector<int>& nums, const int target, int& pos){
//         vector<int> out;
//         unordered_map<int, int> map;
//         for(int i = 0; i < nums.size(); i++){
//             if(map.count(target-nums.at(i))){
//                 out.emplace_back(target-nums.at(i));
//                 out.emplace_back(nums.at(i));
//                 pos = i;
//                 return out;
//             }
//             else{
//                 map.emplace(nums.at(i), i);
//                 pos = 0;
//             }
//         }
//         return out;
//     }
    
    
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> out;
        
//         for(int i = 0; i < nums.size() - 2; i++){
//             for(int j = 0; j < nums.size() - i - 1; j++){
//             vector<int> cur(nums.begin() + i + 1+j, nums.end());
//                 int pos;
//                 vector<int> addition = twoSum(cur,- nums.at(i), pos);
//                 addition.emplace_back(nums.at(i));
//                 if(addition.size() == 3){
//                    // sort(addition.begin(), addition.end());
//                     out.emplace_back(addition);
//                     cout << pos;
//                     j += pos;
                    
//                 }
//             }
//         }
//         return out;
//     }
// };

// #include <unordered_map>
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         vector<int> out;
//         unordered_map<int, int> map;
//         for(int i = 0; i < nums.size(); ++i){
//             if(map.count(target - nums.at(i))){
//                 out.emplace_back(i);
//                 out.emplace_back(map.at(target - nums.at(i)));
//             }
//             else{
//                 map.emplace(nums.at(i), i);
//             }
//         }
//         return out;
//     }
// };