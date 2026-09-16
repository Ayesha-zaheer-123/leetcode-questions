class Solution {
public:
bool func(int mid,vector<int>&bloomDay,int m,int k) {
 int consective=0;
        int flower=0;
        int n=bloomDay.size();
for(int i=0;i<n;i++) {
    if(bloomDay[i]<=mid) {
        consective++;
        if(consective==k) {
            flower++;
            consective=0;
        }
    }else{
        consective=0;
    }
}
    if(flower>=m) {
        return true;
    }
    return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
      int maxi= *max_element(bloomDay.begin(), bloomDay.end());
        if((long long)m*k>n)  return -1;
        int low=1;
        int high=maxi;
        int ans=maxi;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(func(mid,bloomDay,m,k)) {
ans=mid;
high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
