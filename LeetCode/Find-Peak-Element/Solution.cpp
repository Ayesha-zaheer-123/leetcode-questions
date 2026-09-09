1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n=nums.size();
5        int ans=INT_MAX;
6        if(n==0) return -1;
7        if(n==1) return 0;
8        if(n==2) {
9if(nums[0]>nums[1]) {
10                return 0;
11            }else{
12                return 1;
13            }
14        }
15        if(nums[n-1]>nums[n-2]) {
16            return n-1;
17        }
18        int low=0;
19        int high=n-2;
20        while(low<=high) {
21            if(low==0) {
22                if(nums[low]>nums[low+1]) {
23                    return low;
24                }
25        low++;
26            }
27            int mid=(low+high)/2;
28            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]) {
29                return mid;
30            }if(nums[mid]<nums[mid-1]) {
31                high=mid-1;
32            }else{
33                low=mid+1;
34            }
35        }
36        return -1;
37    }
38};