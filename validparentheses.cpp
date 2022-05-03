class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 == 1) return false;
        if(s.length() == 0) return true;
        stack<char> t;
        
        for(int i = 0; i < s.length(); ++i){
            if (s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{')
                t.push(s.at(i));
            else{
                if(t.empty()) return false;
                if((t.top() == '(' && s.at(i) == ')') || (t.top() == '[' && s.at(i) == ']') || t.top() == '{' && s.at(i) == '}')
                t.pop();
                else return false;
            }
        }
        return t.empty();
    }
};