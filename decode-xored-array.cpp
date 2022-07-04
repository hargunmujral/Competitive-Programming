class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> out(1, first);
        for (int i = 0; i < encoded.size(); i++)
        {
            out.push_back(out[i] ^ encoded[i]);
        }
        return out;
    }
};