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
18        for(int i=0;i<n-1;i++) {
19            if(i==0) {
20                if(nums[i]>nums[i+1]) {
21                    return 0;
22                }
23                continue;
24            }
25            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) {
26                ans=i;
27            }
28        }
29        return ans;
30    }
31};