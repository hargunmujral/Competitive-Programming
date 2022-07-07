class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int beams = 0;
        int devices = count(bank[0].begin(), bank[0].end(), '1');
        for (int i = 1; i < bank.size(); i++)
        {
            cout << devices << endl;
            int temp = count(bank[i].begin(), bank[i].end(), '1');
            if (!temp)
                continue;
            beams += devices * temp;
            devices = temp;
        }
        return beams;
    }
};