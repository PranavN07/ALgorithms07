class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        bool fr = false, fc = false;

        // Step 1: Identify whether first row or first column needs to be zeroed
        for(int j = 0; j < col; j++) {
            if(matrix[0][j] == 0) {
                fr = true;
                break;
            }
        }

        for(int i = 0; i < row; i++) {
            if(matrix[i][0] == 0) {
                fc = true;
                break;
            }
        }

        // Step 2: Use first row and first column to mark zero positions
        for(int i = 1; i < row; i++) {
            for(int j = 1; j < col; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 3: Set matrix cells to zero based on markers
        for(int i = 1; i < row; i++) {
            if(matrix[i][0] == 0) {
                for(int j = 1; j < col; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for(int j = 1; j < col; j++) {
            if(matrix[0][j] == 0) {
                for(int i = 1; i < row; i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 4: Zero out first row if necessary
        if(fr) {
            for(int j = 0; j < col; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 5: Zero out first column if necessary
        if(fc) {
            for(int i = 0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
