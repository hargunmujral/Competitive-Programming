class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        const int rows = mat.size();
        const int cols = mat.at(0).size();
        
        vector<vector<int>> distance(rows, vector<int> (cols, 10000));
        vector<vector<int>> comparison(rows, vector<int>(cols, 0));
        
        while(distance != comparison){
            comparison = distance;
            distancer(mat, distance, rows, cols);
        }
        
        return distance;
        
    }
    
    vector<vector<int>> distancer(const vector<vector<int>>& mat, vector<vector<int>>& distance, const int rows, const int cols){
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                if(mat[i][j] == 0){
                    distance[i][j] = 0;
                }
                else{
                    if(i > 0) {
                        distance[i][j] = min(distance[i][j], distance[i-1][j] + 1);
                    }
                    if(j > 0) {
                        distance[i][j] = min(distance[i][j], distance[i][j-1] + 1);
                    }
                    if(i < rows - 1){
                        distance[i][j] = min(distance[i][j], distance[i+1][j]+1);
                    }
                    if(j < cols - 1){
                        distance[i][j] = min(distance[i][j], distance[i][j+1]+1);
                    }
                }
            }
        }
        for(int i = rows - 1; i >= 0; --i){
            for(int j = cols - 1; j >= 0; --j){
                     if(i > 0) {
                        distance[i][j] = min(distance[i][j], distance[i-1][j] + 1);
                    }
                    if(j > 0) {
                        distance[i][j] = min(distance[i][j], distance[i][j-1] + 1);
                    }
                    if(i < rows - 1){
                        distance[i][j] = min(distance[i][j], distance[i+1][j]+1);
                    }
                    if(j < cols - 1){
                        distance[i][j] = min(distance[i][j], distance[i][j+1]+1);
                    }
            }
        }
        return distance;
    }
    
};
