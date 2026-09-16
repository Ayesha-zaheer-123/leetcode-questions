1class Solution {
2public:
3bool func(int mid,vector<int>&bloomDay,int m,int k) {
4 int consective=0;
5        int flower=0;
6        int n=bloomDay.size();
7for(int i=0;i<n;i++) {
8    if(bloomDay[i]<=mid) {
9        consective++;
10        if(consective==k) {
11            flower++;
12            consective=0;
13        }
14    }else{
15        consective=0;
16    }
17}
18    if(flower>=m) {
19        return true;
20    }
21    return false;
22}
23    int minDays(vector<int>& bloomDay, int m, int k) {
24        int n=bloomDay.size();
25      int maxi= *max_element(bloomDay.begin(), bloomDay.end());
26        if((long long)m*k>n)  return -1;
27        int low=1;
28        int high=maxi;
29        int ans=maxi;
30        while(low<=high) {
31            int mid=(low+high)/2;
32            if(func(mid,bloomDay,m,k)) {
33ans=mid;
34high=mid-1;
35            }else{
36                low=mid+1;
37            }
38        }
39        return ans;
40    }
41};