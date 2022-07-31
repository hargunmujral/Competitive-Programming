class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        reverse(word.begin(), word.begin() + 1 + word.find(ch, 0));
        return word;
    }
};