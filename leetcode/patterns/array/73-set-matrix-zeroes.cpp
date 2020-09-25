class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int nrows = matrix.size();
        int ncols = matrix[0].size();
        bool col_marked = false;

        for(int i = 0; i < nrows; i++) {
            if(matrix[i][0] == 0)
                col_marked = true;

            for(int j = 1; j < ncols; j++) {
                if(matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for(int i = 1; i < nrows; i++)
            for(int j = 1; j < ncols; j++)
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;

        if(matrix[0][0] == 0)
            for(int j = 0; j < ncols; j++)
                matrix[0][j] = 0;

        if(col_marked)
            for(int i = 0; i < nrows; i++)
                matrix[i][0] = 0;
    }
};
