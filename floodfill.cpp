
class Solution {
public:
    
     void filler(vector<vector<int>>& image, int sr, int sc, int newColor, int original)     
    {
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image.at(0).size() || original == newColor || image[sr][sc] != original) return;
        image[sr][sc] = newColor;
        filler(image, sr-1, sc, newColor, original);
        filler(image, sr+1, sc, newColor, original);
        filler(image, sr, sc-1, newColor, original);
        filler(image, sr, sc+1, newColor, original);
        return;        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        filler(image, sr, sc, newColor, image[sr][sc]);
        return image;

    }
   
};