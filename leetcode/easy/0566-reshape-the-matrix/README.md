# Reshape the Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In MATLAB, there is a handy function called `reshape` which can reshape an `m x n` matrix into a new one with a different size `r x c` keeping its original data.

You are given an `m x n` matrix `mat` and two integers `r` and `c` representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the `reshape` operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

 

Original
C++
 **Example 1:** 

```
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]

```

 **Example 2:** 

```
Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]]

```

 

 **Constraints:** 

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 100
- -1000 <= mat[i][j] <= 1000
- 1 <= r, c <= 300

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15 MB (beats 85.69%)  
**Submitted:** 2026-11-20T15:25:32.305Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/reshape-the-matrix/)