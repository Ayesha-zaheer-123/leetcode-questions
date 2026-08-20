class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
          int m = matrix.size();     
    int n = matrix[0].size();   
    int maxSize = max(m, n);
    vector<vector<bool>> marker(2, vector<bool>(maxSize, true));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                marker[0][i] = false;  
                marker[1][j] = false;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (marker[0][i] == false || marker[1][j] == false) {
                matrix[i][j] = 0;
            }
        }
    }

    }
};
