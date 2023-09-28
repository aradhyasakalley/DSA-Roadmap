class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int col0 = 1; 
       int n = matrix.size();
       int m = matrix[0].size();
       // marking all the rows and columns for the zero entries
       for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    if (j != 0) 
                        matrix[0][j] = 0;
                    else 
                        col0 = 0;
                }
            }
       }

       // iterating through the matrix except the rows and columns assigned as 0
       for (int i = 1; i < n; i++) { // Start from 1 to exclude the first row
            for (int j = 1; j < m; j++) { // Start from 1 to exclude the first column
                if (matrix[i][j] != 0) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
       }

       // handling the first row
       if (matrix[0][0] == 0) {
            for (int i = 0; i < m; i++) {
                matrix[0][i] = 0;
            }
       }

       // handling the first column
       if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
       }
    }
};
