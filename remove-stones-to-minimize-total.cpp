class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        int sum = accumulate(piles.begin(), piles.end(), 0);
        priority_queue<int> heap(piles.begin(), piles.end());
        int temp;
        while (k-- > 0)
        {
            sum -= heap.top() / 2;
            temp = heap.top() - heap.top() / 2;
            heap.pop();
            heap.push(temp);
        }
        return sum;
    }
};