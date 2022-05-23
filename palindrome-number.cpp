class Solution
{
public:
    bool isPalindrome(int x)
    {
        string out = to_string(x);
        for (int i = 0; i < out.length() / 2; i++)
        {
            if (out.at(i) != out.at(out.length() - 1 - i))
                return false;
        }
        return true;
    }
};