1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n=nums.size();
5        if(n==0) return -1;
6        if(n==1) return 0;
7        if(n==2) {
8if(nums[0]>nums[1]) {
9                return 0;
10            }else{
11                return 1;
12            }
13        }
14        if(nums[n-1]>nums[n-2]) {
15            return n-1;
16        }
17        int low=0;
18        int high=n-2;
19        while(low<=high) {
20            if(low==0) {
21                if(nums[low]>nums[low+1]) {
22                    return low;
23                }
24        low++;
25            }
26            int mid=(low+high)/2;
27            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]) {
28                return mid;
29            }if(nums[mid]<nums[mid-1]) {
30                high=mid-1;
31            }else{
32                low=mid+1;
33            }
34        }
35        return -1;
36    }
37};