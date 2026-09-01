1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n=nums.size();
5        int low=0;
6        int high=n-1;
7        int ans=-1;
8        while(low<=high) {
9int mid=low+(high-low)/2;
10if(nums[mid]==target) {
11    ans=mid;
12    return ans;
13}else if(target>nums[mid]) {
14    low=mid+1;
15}else{
16    high=mid-1;
17}
18        }
19        if(ans==-1) {
20            ans=high+1;
21        }
22        return ans;
23    }
24};