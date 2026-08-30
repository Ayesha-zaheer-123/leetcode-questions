1class Solution {
2public:
3    vector<int> getRow(int rowIndex) {
4         vector<vector<int>> triangle;
5
6    for (int i = 0; i <= rowIndex; i++) {
7        vector<int> row(i + 1, 1);
8
9        for (int j = 1; j < i; j++) {
10            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
11        }
12
13        triangle.push_back(row);
14    }
15
16    return triangle[rowIndex];
17    }
18};