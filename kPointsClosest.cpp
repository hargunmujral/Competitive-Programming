// Editing the vector directly (pass)
class Solution {
public:   
    int square(const vector<int>& input){
        return input.at(0) * input.at(0) + input.at(1) * input.at(1);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
            sort(points.begin(), points.end(), [&](vector<int>& a, vector<int>& b) {
                return square(a) < square(b);
            });
            return vector<vector<int>>(points.begin(), points.begin()+k);
        }
};

// creating a new vector and appending and sorting (TLE)
// class Solution {
// public:
    
//     int square(vector<int> input){
//         return input.at(0) * input.at(0) + input.at(1) * input.at(1);
//     }
    
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//         vector<vector<int>> out;

//         for(int i = 0; i < points.size(); i++){
//                 sort(out.begin(), out.end(), [&](vector<int>& a, vector<int>& b) {
//                     return square(a) < square(b);
//                 });
//             if(out.size() < k){ 
//                     out.push_back(points.at(i));
//             } else{
//                 if(square(points.at(i)) < square(out.back())){
//                     out.back() = points.at(i);
//                 }

//              };
//             } 
//         return out;

//         }
// };
   
