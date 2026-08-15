class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int row = 0;
        int col = 0;

        while(true){
            int up    = (row > 0)   ? mat[row-1][col] : -1;
            int down  = (row < m-1) ? mat[row+1][col] : -1;
            int left  = (col > 0)   ? mat[row][col-1] : -1;
            int right = (col < n-1) ? mat[row][col+1] : -1;

            if(mat[row][col] > up && mat[row][col] > down &&
               mat[row][col] > left && mat[row][col] > right){
                return {row, col};
            } else if(down >= mat[row][col] && down >= up && down >= left && down >= right){
                row++;
            } else if(right >= mat[row][col] && right >= up && right >= left && right >= down){
                col++;
            } else if(up >= mat[row][col] && up >= down && up >= left && up >= right){
                row--;
            } else {
                col--;
            }
        }
    }
};