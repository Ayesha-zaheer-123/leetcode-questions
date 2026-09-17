1class Solution {
2public:
3bool func(int mid,vector<int>&nums,int  threshold) {
4            int sum = 0;
5            for(int i = 0;i< nums.size(); i++) {
6                sum += ceil((double)nums[i] / mid);
7            }
8            if(sum<=threshold) return true;
9            return false;
10            }
11
12    int smallestDivisor(vector<int>& nums, int threshold) {
13    int n=nums.size();
14int maxi = *max_element(nums.begin(), nums.end());
15int low=1;
16int high=maxi;
17int ans=-1;
18while(low<=high) {
19    int mid=(low+high)/2;
20    if(func(mid,nums,threshold)) {
21ans=mid;
22high=mid-1;
23    }else{
24        low=mid+1;
25    }
26}
27    return ans;
28    }
29};