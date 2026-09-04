1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4    int ans=-1;
5    int low=0;
6    int high=nums.size()-1;
7    while(low<=high) {
8        int mid=(low+high)/2;
9        if(nums[mid]==target) {
10            return mid;
11        }else if(nums[low]<=nums[mid]) {
12            if(target>=nums[low]&&target<nums[mid]) {
13               high=mid-1;
14            }else{
15                low=mid+1;
16            }
17        }else{
18if(target>nums[mid]&&target<=nums[high]) {
19    low=mid+1;
20}else{
21    high=mid-1;
22}
23        }
24    }
25    return ans;
26    }
27};