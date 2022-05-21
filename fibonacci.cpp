// iterative fibonacci

class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int a[] = {0, 1, 1};
        int temp = a[2];
        for (int i = 2; i < n; i++)
        {
            temp = a[1] + a[2];
            a[0] = a[1];
            a[1] = a[2];
            a[2] = temp;
        }
        return temp;
    }
};

// recursive fibonacci
class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }
};