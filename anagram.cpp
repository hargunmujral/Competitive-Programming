class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> smap(26);        
        for(auto& i : s){
            smap.at(i - 'a')++;
        }
        for(auto& i : t){
            smap.at(i - 'a')--;
        }
        for(auto& i : smap){
            if(i != 0) return false;
        }
        return true;   
    }
};