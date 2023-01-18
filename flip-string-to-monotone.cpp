#include <bits/stdc++.h>

class Solution
{
public:
    int minFlipsMonoIncr(string s)
    {
        int numflip = 0, num1 = 0;
        // cout << num0 << endl;
        // int num1 = s.size() - num0;
        for (const auto &c : s)
        {
            if (c == '1')
                num1++;
            else
                numflip++;
            numflip = min(numflip, num1);
        }
        return numflip;

        // if(num0 < num1) {

        // }
        // else{

        // }
        // string owo = s.substr(num0);
        // return min(count(owo.begin(), owo.end(), '1'), count(owo.begin(), owo.end(), '0'),);
        // int count = 0;
        // int comp = 1;
        // int num = stoi(s);
        // for(int i = 0; i < 31; i++) {
        //     count = min(count, __builtin_popcount(!(num & (comp))));
        //     comp <<= 1;
        //     comp += 1;
        // }
        // return count;
    }
};
