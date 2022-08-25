class Solution
{
public:
    long fact(int num)
    {
        if (!num || num == 1)
            return 1;
        return num * fact(num - 1);
    }
    int uniquePaths(int m, int n)
    {
        if (m > n)
            swap(m, n);
        // cout << fact(m) << endl << fact(n) << endl << fact(n-m);
        // int num = m+n-2;
        // int num2 = n-1;
        // return fact(num)/(fact(num2)*(fact(num-num2)));
        long ans = 1;
        for (int i = m + n - 2, j = 1; i >= n; i--, j++)
            ans = (ans * i) / j;
        return ans;
    }
};