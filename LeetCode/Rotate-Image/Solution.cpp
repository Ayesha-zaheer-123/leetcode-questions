1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int rows=matrix.size();
5        int cols=matrix[0].size();
6        for(int i=0;i<rows;i++) {
7            for(int j=i+1;j<cols;j++) {
8              swap(matrix[i][j],matrix[j][i]);
9            }
10        }
11for(int i=0;i<rows;i++) {
12    reverse(matrix[i].begin(),matrix[i].end());
13}
14    }
15};