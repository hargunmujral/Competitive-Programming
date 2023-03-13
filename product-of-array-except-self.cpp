class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        // rolling product keeps track of cumulative product, and pair, with first
        // element representing the count of zeroes, second element representing the
        // index of the last zero.
        int rolling_prod = 1;
        pair<int, int> zero_flag = {0, 0};

        // Loops n-1 times, to avoid edge case where product of all elements overflows
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != 0)
                rolling_prod *= nums[i];
            else
            {
                zero_flag.first++;
                zero_flag.second = i;
            }
        }

        // Initialize a vector of size n to zero, in case there are zeroes in the array
        vector<int> answer(nums.size(), 0);

        // in the case that there is one zero, all indices but zero_flag.second (i*) should
        // have an answer value of zero. We however need to preserve the rolling_prod
        // to tell us the value at (i*). Since rolling prod never got to the last
        // index, we multiply it by that last value. This also handles the case if the last
        // index is also a zero, since (i*) will become zero, which is expected behaviour.
        if (zero_flag.first == 1)
        {
            answer[zero_flag.second] = rolling_prod * nums.back();
            return answer;
        }

        // in the case that there are more than one zeroes, the entire array is set to zero.
        else if (zero_flag.first > 1)
        {
            return answer;
        }

        // finally, if the entire array is nonzero, we iterate backwards to maintain O(n) complexity,
        // essentially setting the value at the index in answer to rolling prod and updating rolling prod
        // in such a way to avoid overflow.
        for (int i = nums.size() - 1; i > 0; i--)
        {
            answer[i] = rolling_prod;
            rolling_prod /= nums[i - 1];
            rolling_prod *= nums[i];
        }

        // Since we need to avoid touching negative indices, we set answer[0] separately, and end
        // the previous loop before it hits zero.
        answer[0] = rolling_prod;
        return answer;
    }
};