class Solution
{
public:
    int ogcd(vector<int> &numbers)
    {
        int result = numbers[0];
        for (int i = 1; i < numbers.size(); i++)
            result = __gcd(result, numbers[i]);
        return result;
    }
    int minOperations(vector<int> &nums, vector<int> &numsDivide)
    {
        // int gcd = numsDivide[0];
        // for(int i = 1; i < numsDivide.size(); i++){
        //     gcd =  (gcd % numsDivide[i] == 0) ? gcd : gcd % numsDivide[i];
        // }
        int gcd = ogcd(numsDivide);
        cout << gcd;
        sort(nums.begin(), nums.end());
        int count = 0;
        for (const auto &n : nums)
        {
            if (gcd % n != 0)
                count++;
            else
                return count;
        }
        return -1;
    }
};