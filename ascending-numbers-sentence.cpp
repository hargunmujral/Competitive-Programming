class Solution
{
public:
    bool areNumbersAscending(string s)
    {
        istringstream ss(s);
        string word;
        int mm = INT_MIN;
        while (ss >> word)
        {
            if (isdigit(word.front()))
            {
                if (stoi(word) <= mm)
                    return false;
                mm = stoi(word);
            }
        }
        return true;
    }
};