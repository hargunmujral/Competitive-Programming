class Solution
{
public:
    int divisorSubstrings(int num, int k)
    {
        int count = 0;
        int end = k - 1;
        string number = to_string(num);
        while (end != number.length())
        {
            int divisor = stoi(number.substr(end - k + 1, k));
            if (divisor && num % divisor == 0)
                count++;
            end++;
        }
        return count;
    }
};