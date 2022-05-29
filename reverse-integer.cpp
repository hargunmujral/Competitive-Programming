class Solution
{
public:
// this function has to reverse an integer up to intmax, and should check for edge cases
    int reverse(int x)
    {
        vector<int> out;
        // the point for a flag is to check if the number is negative
        int flag = 1;
        // here we check if flipping the sign of the number will make it overflow
        if (x < -INT_MAX)
            return 0;
        // here we filp the sign of the input if negative
        if (x < 0)
        {
            flag = -1;
            x *= flag;
        }
        // for each digit in the number, we push it to the vector
        while (x > 0)
        {
            out.push_back(x % 10);
            x /= 10;
        }
        int reversed = 0;
        // for each element in the vector, left to right, we append it to the output
        for (const int &i : out)
        {
            // here again we check for overflow
            if (reversed > INT_MAX / 10)
                return 0;
            reversed *= 10;
            reversed += i;
        }
        return flag * reversed;
    }
};