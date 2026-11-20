#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int R = matrix.size();       // Number of rows
        int C = matrix[0].size();    // Number of columns
        
        // Initialize the result matrix with swapped dimensions (C x R)
        vector<vector<int>> transposed(C, vector<int>(R));
        
        // Iterate through the original matrix and place values in transposed positions
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                transposed[j][i] = matrix[i][j];
            }
        }
        
        return transposed;
    }
};