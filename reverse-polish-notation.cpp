class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        string back = tokens.back();
        tokens.pop_back();
        if (back == "*" || back == "/" || back == "+" || back == "-")
        {
            int right = evalRPN(tokens);
            int left = evalRPN(tokens);
            if (back == "*")
                return left * right;
            else if (back == "/")
                return left / right;
            else if (back == "+")
                return left + right;
            else
                return left - right;
        }
        else
            return stoi(back);
    }
};