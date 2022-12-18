class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        stack<int> stack;
        vector<int> res(temperatures.size(), 0);
        for (int i = temperatures.size() - 1; i >= 0; i--)
        {
            while (stack.size() > 0 && temperatures[stack.top()] <= temperatures[i])
            {
                stack.pop();
            }
            if (stack.size() > 0)
            {
                res[i] = stack.top() - i;
            }
            stack.push(i);
        }
        return res;
    }
};