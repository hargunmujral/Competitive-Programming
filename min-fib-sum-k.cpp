class Solution
{
public:
    int findMinFibonacciNumbers(int k)
    {
        vector<int> fibs(2, 1);
        int prev = 1;
        int index = 1;
        while (fibs[index] + prev <= k)
        {
            fibs.push_back(fibs[index] + prev);
            prev = fibs[index++];
        }
        int count = 0;
        while (k > 0 && index >= 0)
        {
            while (k >= fibs[index])
            {
                k -= fibs[index];
                count++;
            }
            index--;
        }
        return count;
    }
};
