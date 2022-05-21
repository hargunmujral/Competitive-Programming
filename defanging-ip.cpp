class Solution
{
public:
    string defangIPaddr(string address)
    {
        int i = 0;
        while (true)
        {
            i = address.find('.', i);
            if (i == string::npos)
                return address;
            address.replace(i, 1, "[.]");
            i += 3;
        }
    }
};