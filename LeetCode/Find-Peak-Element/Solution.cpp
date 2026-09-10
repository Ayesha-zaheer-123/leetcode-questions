1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n=nums.size();
5        if(n==0) return -1;
6        if(n==1) return 0;
7        if(nums[n-1]>nums[n-2]) {
8            return n-1;
9        }
10        int low=0;
11        int high=n-2;
12        while(low<=high) {
13            if(low==0) {
14                if(nums[low]>nums[low+1]) {
15                    return low;
16                }
17        low++;
18            }
19            int mid=(low+high)/2;
20            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]) {
21                return mid;
22            }if(nums[mid]<nums[mid-1]) {
23                high=mid-1;
24            }else{
25                low=mid+1;
26            }
27        }
28        return -1;
29    }
30};