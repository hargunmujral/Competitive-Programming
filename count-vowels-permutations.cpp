class Solution
{
public:
    int countVowelPermutation(int n)
    {
        long a = 1, e = 1, i = 1, o = 1, u = 1;
        int mod = pow(10, 9) + 7;
        for (int count = 1; count < n; count++)
        {
            long a_temp = a, e_temp = e, o_temp = o;
            a = (e + i + u) % mod;
            e = a_temp + i % mod;
            i = e_temp + o % mod;
            o = e - a_temp % mod;
            u = o_temp + o % mod;
        }
        return (a + e + i + o + u) % mod;
    }
};