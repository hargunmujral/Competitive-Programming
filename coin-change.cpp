class Solution
{
public:
    // TLE

    //     int coinCount(vector<int>& coins, int amount, int size){
    //         if(amount == 0 && size >= 0) return 0;
    //         if(amount != 0 && size == 0) return INT_MAX - amount;
    //         // int coin = coins[size-1];
    //         if(coins[size-1] > amount) return coinCount(coins, amount, size-1);
    //         else return min(coinCount(coins, amount, size - 1), 1+coinCount(coins, amount - coins[size-1], size));

    //     }
    //     int coinChange(vector<int>& coins, int amount) {
    //         int output = (coinCount(coins, amount, coins.size()));
    //         return output > amount ? -1 : output ;
    //     }

    int coinChange(vector<int> &coins, int amount)
    {
        int array[++amount];
        array[0] = 0;
        sort(coins.begin(), coins.end());
        for (int i = 1; i < amount; i++)
        {
            array[i] = INT_MAX;
            for (const int &j : coins)
            {
                if (i - j < 0)
                    break;
                if (array[i - j] != INT_MAX)
                    array[i] = min(array[i], 1 + array[i - j]);
            }
        }
        return array[--amount] == INT_MAX ? -1 : array[amount];
    }
};