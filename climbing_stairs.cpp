class Solution
{
public:
    int climbStairs(int n)
    {
        // This is fibonacci! We will solve it the more efficient, iterative way instead of recursive
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int back2 = 0;
        int back = 1;
        int cur = 2;
        for (int i = 2; i < n; i++)
        {
            int temp = back + cur;
            back2 = back;
            back = cur;
            cur = temp;
        }
        return cur;
    }
};

// n = 2:

// 1, 1
// 2

// n = 3:

// 1, 1, 1
// 1, 2
// 2, 1

// n = 4:

// 1, 1, 1, 1
// 1, 2, 1
// 2, 1, 1
// 1, 1, 2
// 2, 2

// n = 5:

// 1, 1, 1, 1, 1
// 1, 1, 1, 2
// 1, 2, 1, 1
// 2, 1, 1, 1
// 1, 1, 2, 1
// 2, 2, 1
// 1, 2, 2
// 2, 1, 2
