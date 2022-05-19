class MyQueue
{
public:
    stack<int> a, b;

    MyQueue()
    {
    }

    void push(int x)
    {
        a.push(x);
    }

    int pop()
    {
        if (b.size() == 0)
        {
            while (a.size() != 0)
            {
                b.push(a.top());
                a.pop();
            }
        }
        int out = b.top();
        b.pop();
        return out;
    }

    int peek()
    {
        if (b.size() > 0)
        {
            return b.top();
        }
        else
        {
            while (a.size() > 0)
            {
                b.push(a.top());
                a.pop();
            }
            return b.top();
        }
    }

    bool empty()
    {
        return a.size() == 0 && b.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */