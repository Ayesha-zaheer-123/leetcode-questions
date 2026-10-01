1class Solution {
2public:
3int countSubarrays(vector<int>& nums, int maxSum) {
4
5        int subarrays = 1;
6        int sum = 0;
7
8        for(int i = 0; i < nums.size(); i++) {
9
10            if(sum + nums[i] <= maxSum) {
11                sum += nums[i];
12            }
13            else {
14                subarrays++;
15                sum = nums[i];
16            }
17        }
18
19        return subarrays;
20    }
21    int splitArray(vector<int>& nums, int k) {
22         int low = *max_element(nums.begin(), nums.end());
23
24        int high = 0;
25        for(int x : nums) {
26            high += x;
27        }
28
29        while(low <= high) {
30
31            int mid = low + (high - low) / 2;
32
33            int required = countSubarrays(nums, mid);
34
35            if(required <= k) {
36                // mid feasible hai
37                // aur chhota answer try karo
38                high = mid - 1;
39            }
40            else {
41                // mid mein k subarrays mein split nahi ho raha
42                low = mid + 1;
43                     low = mid + 1;
44            }
45        }
46
47        return low;
48    }
49};