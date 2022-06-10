class Solution
{
public:

    // Time limit exceeded

    /*
        * int binarySearch(vector<int> &numbers, int targetMinusCur)
        * {
        *     int min = 0;
        *     int max = numbers.size() - 1;
        *     int mid = min + max / 2;
        *     while (min < max)
        *     {
        *         mid = max + min / 2;
        *         if (numbers[mid] == targetMinusCur)
        *             return mid;
        *         else if (numbers[mid] < targetMinusCur)
        *         {
        *             min = mid + 1;
        *         }
        *         else
        *             max = mid - 1;
        *     }
        *     return 0;
        * }
        * vector<int> twoSum(vector<int> &numbers, int target)
        * {
        *     for (int i = 0; i < numbers.size(); i++)
        *     {
        *         int search = (binarySearch(numbers, target - numbers[i]));
        *         if (search && i != search)
        *             return {i + 1, search + 1};
        *     }
        *     return {0, 0};
        * }
    */

    // Optimized version
    vector<int> twoSumOptimized(vector<int> &numbers, int target)
    {
        int first = 0;
        int last = numbers.size() - 1;
        while (first < last)
        {
            if (numbers[first] + numbers[last] == target)
                return {1 + first, 1 + last};
            if (target - numbers[last] > numbers[first])
                first++;
            if (target - numbers[first] < numbers[last])
                last--;
        }
        return {0, 0};
    }
};