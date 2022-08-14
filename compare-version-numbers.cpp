class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        int i = 0, j = 0;
        int size1 = version1.size(), size2 = version2.size();
        while (i < size1 || j < size2)
        {
            int num1 = 0, num2 = 0;
            while (i < size1 && version1[i] != '.')
                (num1 *= 10) += version1[i++] - '0';
            while (j < size2 && version2[j] != '.')
                (num2 *= 10) += version2[j++] - '0';
            if (num1 == num2)
            {
                i++;
                j++;
            }
            else
                return num1 > num2 ? 1 : -1;
        }
        return 0;
    }
};
