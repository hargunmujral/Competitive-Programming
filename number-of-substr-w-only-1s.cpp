class Solution
{
public:
    long long numSub(string &s, long long cnt = 0, int ptr = 0)
    {
        return s.size() == ptr ? 0 : s[ptr] == '0' ? numSub(s, 0, ptr + 1) : ++cnt + numSub(s, cnt, ptr + 1) % long(1e9 + 7);
    }
};