class Solution {
public:
bool func(int mid,vector<int>&weights,int days) {
    int n=weights.size();
            int sums=0;
            int day=1;
            for(int i=0;i<n;i++) {
                if(sums+weights[i]<=mid) {
                    sums+=weights[i];
                }else{
                    day++;
                    sums=weights[i];
                }
            }
            if(day<=days) {
return true;
            } 
            return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
         int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        int ans=-1;
        int n=weights.size();
        for(int i=0;i<n;i++) {
sum+=weights[i];
        }
        int high=sum;
        while(low<=high) {
            int mid=(low+high)/2;
            if(func(mid,weights,days)) {
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
