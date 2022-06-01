class Solution
{
public:
    string addBinary(string a, string b)
    {
        string out = "";
        int aSize = a.size() - 1;
        int bSize = b.size() - 1;
        int carry = 0;
        while (aSize >= 0 || bSize >= 0 || carry == 1)
        {
            if (aSize >= 0 && a[aSize] == '1')
                carry++;
            if (bSize >= 0 && b[bSize] == '1')
                carry++;
            out.push_back((carry % 2) + '0');
            if (carry >= 2)
                carry = 1;
            else
                carry = 0;
            bSize--;
            aSize--;
        }
        reverse(out.begin(), out.end());
        return out;
    }
};

// Other implementation: this works if the input is 64 bits or less, limited by the datatype ulong (64 bit)

// if(a == "0" && b == "0") return "0";
// bitset<64> first(a);
// bitset<64> second(b);
// bitset<64> out(first.to_ulong() + second.to_ulong());
// string outString = out.to_string();
// return outString.substr(outString.find('1'));