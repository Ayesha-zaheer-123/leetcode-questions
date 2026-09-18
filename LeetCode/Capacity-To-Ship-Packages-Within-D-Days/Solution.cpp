1class Solution {
2public:
3bool func(int mid,vector<int>&weights,int days) {
4    int n=weights.size();
5            int sums=0;
6            int day=1;
7            for(int i=0;i<n;i++) {
8                if(sums+weights[i]<=mid) {
9                    sums+=weights[i];
10                }else{
11                    day++;
12                    sums=weights[i];
13                }
14            }
15            if(day<=days) {
16return true;
17            } 
18            return false;
19}
20    int shipWithinDays(vector<int>& weights, int days) {
21         int low=*max_element(weights.begin(),weights.end());
22        int sum=0;
23        int ans=-1;
24        int n=weights.size();
25        for(int i=0;i<n;i++) {
26sum+=weights[i];
27        }
28        int high=sum;
29        while(low<=high) {
30            int mid=(low+high)/2;
31            if(func(mid,weights,days)) {
32                ans=mid;
33                high=mid-1;
34            }else{
35                low=mid+1;
36            }
37        }
38        return ans;
39    }
40};