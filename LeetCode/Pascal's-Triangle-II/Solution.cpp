1class Solution {
2public:
3    vector<int> getRow(int rowIndex) {
4         vector<vector<int>> triangle;
5    for (int i = 0; i <= rowIndex; i++) {
6        triangle.push_back({});
7       for(int j=0;j<=i;j++) {
8        triangle[i].push_back(1);
9       }
10       if(i>1) {
11        for (int j = 1; j < i; j++) {
12         triangle[i][j]= triangle[i - 1][j - 1] + triangle[i - 1][j];
13        }
14    }
15    }
16
17    return triangle[rowIndex];
18    }
19};