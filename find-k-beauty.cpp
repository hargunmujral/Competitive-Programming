class Solution
{
public:
    // first attempt at question
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

    // does not use string copying, thus more memory efficient
    int divisorSubstringsOptimized(int num, int k)
    {
        int count = 0;
        int check = num;
        long window = 1;
        for (int i = 0; i < k; i++)
            window *= 10;
        int divisor;
        while (num >= window / 10)
        {
            divisor = num % window;
            if (divisor && check % divisor == 0)
                count++;
            num /= 10;
        }
        return count;
    }
};