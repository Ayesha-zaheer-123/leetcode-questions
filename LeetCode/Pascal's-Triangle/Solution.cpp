class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>result;
        for(int i=0;i<numRows;i++) {
           result.push_back({});
for(int j=0;j<=i;j++) {
    result[i].push_back(1);
}
if(i>1) {
   for(int j=1;j<i;j++) {
       result[i][j]=result[i-1][j]+result[i-1][j-1];
   }
}
   
  }
  return result;
   }
};
