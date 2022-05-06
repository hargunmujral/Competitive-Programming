class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> smap(26);        
        for(int i = 0; i < s.length(); ++i){
            smap.at(s.at(i) - 97)++;
        }
        for(int i = 0; i < t.length(); ++i){
            smap.at(t.at(i) - 97)--;
        }
        for(int i = 0; i < smap.size(); i++){
            if(smap.at(i) != 0) return false;
        }
        return true;   
    }
};