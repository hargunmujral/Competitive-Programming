// I created a new comparison class to use in the priority queue
class Compare{
    public:
        bool operator() (pair<int, int>& pair1, pair<int, int>& pair2){
            return pair1.second > pair2.second;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numMap;
        for(const auto& i : nums) numMap[i]++;
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
        for(const auto& i : numMap){
            pq.push(i);
            if(pq.size()>k) pq.pop();
        }
        vector<int> out;
        while(pq.size()) {
            out.push_back(pq.top().first);
            pq.pop();
        }
        return out;
        
    }

   // This is a constructor that overrides the default constructor
   // to replace it with a quicker one, making submissions faster. 
    Solution() {
        cin.tie(nullptr)->sync_with_stdio(false);
    }
};