1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        for(int i=0;i<matrix.size();i++) {
5            for(int j=0;j<matrix[0].size();j++) {
6                if(matrix[i][j]==target) {
7                    return true;
8                }
9            }
10        }
11        return false;
12    }
13};