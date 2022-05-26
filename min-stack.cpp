class MinStack
{
public:
    vector<int> min;
    vector<int> stack;
    MinStack()
    {
    }

    void push(int val)
    {
        if (stack.size() == 0)
            min.push_back(val);
        else if (getMin() >= val)
            min.push_back(val);
        stack.push_back(val);
    }

    void pop()
    {
        if (top() == getMin())
        {
            min.pop_back();
        }
        stack.pop_back();
    }

    int top()
    {
        return stack.at(stack.size() - 1);
    }

    int getMin()
    {
        return min.at(min.size() - 1);
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */