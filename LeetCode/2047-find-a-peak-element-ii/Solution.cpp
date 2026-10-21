class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
  int rows=mat.size();
  int cols=mat[0].size();
  int low=0;
  int high=rows-1;
  while(low<=high) {
    int mid=(low+high)/2;
    int col=0;
    for(int j=1;j<cols;j++) {
        if(mat[mid][j]>mat[mid][col]) {
            col=j;
        }
    }
  int top=(mid>0)? mat[mid-1][col]:-1;
        int bottom=(mid<rows-1)?mat[mid+1][col]:-1;
        if(mat[mid][col]>top&&mat[mid][col]>bottom) {
return {mid,col};
        }

else if(top>mat[mid][col]) {
    high=mid-1;
}else{
    low=mid+1;
}
        
    }


  return {-1,-1};
    }
};