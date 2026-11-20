class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        // If the total number of elements doesn't match, 
        // the reshape is invalid. Return the original matrix.
        if (m * n != r * c) {
            return mat;
        }
        
        vector<vector<int>> reshaped(r, vector<int>(c));
        
        // Iterate through the original matrix and place values into the new matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Calculate the 1D index of the current element
                int idx = i * n + j;
                
                // Map the 1D index back to 2D coordinates for the new matrix
                reshaped[idx / c][idx % c] = mat[i][j];
            }
        }
        
        return reshaped;
    }
};