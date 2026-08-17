1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4    vector<int>ans;
5    int rows=matrix.size();
6    int cols=matrix[0].size();
7    int srow=0;
8    int scol=0;
9int erow=rows-1;
10int ecol=cols-1;
11while(srow<=erow&&scol<=ecol) {
12    for(int i=scol;i<=ecol;i++) {
13        ans.push_back(matrix[srow][i]);
14    }
15    for(int j=srow+1;j<=erow;j++) {
16        ans.push_back(matrix[j][ecol]);
17    }
18    for(int i=ecol-1;i>=scol;i--) {
19        if(srow==erow) {
20            break;
21        }
22        ans.push_back(matrix[erow][i]);
23    }
24    for(int j=erow-1;j>=srow+1;j--) {
25        if(scol==ecol) {
26            break;
27        }
28ans.push_back(matrix[j][scol]);
29    }
30    srow++;
31    ecol--;
32    scol++;
33    erow--;
34}
35    return ans;
36    }
37};