class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        double fivePerc = arr.size() * 0.05;
        double mean = 0;
        sort(arr.begin(), arr.end());
        for (int i = round(fivePerc); i < arr.size() - round(fivePerc); i++)
        {
            mean += arr[i] / (arr.size() - 2 * fivePerc);
        }
        return mean;
    }
};