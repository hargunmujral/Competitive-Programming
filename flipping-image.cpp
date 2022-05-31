class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        // edited in place instead of copying
        int colSize = image.at(0).size();
        for (int i = 0; i < image.size(); i++)
        {
            for (int j = 0; j < colSize / 2; j++)
            {
                swap(image.at(i).at(j), image.at(i).at(colSize - 1 - j));
                image.at(i).at(j) == 0 ? image.at(i).at(j) = 1 : image.at(i).at(j) = 0;
                image.at(i).at(colSize - 1 - j) == 0 ? image.at(i).at(colSize - 1 - j) = 1 : image.at(i).at(colSize - 1 - j) = 0;
            }
            if (colSize % 2 == 1)
            {
                image.at(i).at(colSize / 2) == 0 ? image.at(i).at(colSize / 2) = 1 : image.at(i).at(colSize / 2) = 0;
            }
        }
        return image;
    }
};