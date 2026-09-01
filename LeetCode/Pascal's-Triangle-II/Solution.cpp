class Solution {
public:
  vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle;
    for (int i = 0; i <= rowIndex; i++) {
       triangle.push_back({});
     for(int j=0;j<=i;j++) {
      triangle[i].push_back(1);
     }
      if(i>1) {
      for (int j = 1; j < i; j++) {
       triangle[i][j]= triangle[i - 1][j - 1] + triangle[i - 1][j];
      }
   }    }

    return triangle[rowIndex];
   }
};
