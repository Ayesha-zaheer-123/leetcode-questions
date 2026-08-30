1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>>result;
5        for(int i=0;i<numRows;i++) {
6            result.push_back({});
7for(int j=0;j<=i;j++) {
8    result[i].push_back(1);
9}
10if(i>1) {
11    for(int j=1;j<i;j++) {
12        result[i][j]=result[i-1][j]+result[i-1][j-1];
13    }
14}
15    
16    }
17    return result;
18    }
19};