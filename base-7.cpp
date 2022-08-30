class Solution
{
public:
    string convertToBase7(int num)
    {
        if (!num)
            return "0";
        int flag = (num >= 0);
        num = abs(num);
        string res = "";
        while (num)
        {
            res = to_string(num % 7) + res;
            num /= 7;
        }
        return !flag ? "-" + res : res;
    }
};