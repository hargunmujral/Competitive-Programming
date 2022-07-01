class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cookie = 0;
        int child = 0;
        while(child < g.size() && cookie < s.size()){
            if(g[child] <= s[cookie]) child++;
            cookie++;
        }
        return child;
    }
};