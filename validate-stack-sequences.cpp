class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> s;
        const int n = popped.size();
        int iter = 0;
        for (const int &i : pushed)
        {
            s.push(i);
            while (s.size() && iter < n && s.top() == popped[iter])
            {
                s.pop();
                iter++;
            }
        }
        return n == iter;
    }
};