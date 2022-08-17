class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> map = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        unordered_set<string> set;
        for (const string &str : words)
        {
            string toAdd = "";
            for (const char &c : str)
            {
                toAdd += map[c - 'a'];
            }
            set.insert(toAdd);
        }
        return set.size();
    }
};