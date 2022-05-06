class Solution {
public:
    bool isPalindrome(string s) {
        string out;
        for(int i = 0; i < s.length(); ++i){
            if(isalnum(s.at(i))) out.push_back(tolower(s.at(i)));
        }
        for(int i = 0; i < out.length() / 2; ++i){
            if(out.at(i) != out.at(out.length() - 1 - i)) return false;
        }
        return true;
    }
};