1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>>finalans;
5        int n=nums.size();
6        sort(nums.begin(),nums.end());
7       for(int i=0;i<n;i++) {
8         if(i>0&&nums[i]==nums[i-1]) continue;
9        int j=i+1;
10        int k=n-1;
11        while(j<k) {
12            if(nums[i]+nums[j]+nums[k]==0) {
13                finalans.push_back({nums[i],nums[j],nums[k]});
14                j++;
15                k--;
16                while(j<k&&nums[j]==nums[j-1]) {
17        j++;
18            }
19            while(j<k&&nums[k]==nums[k+1]) {
20        k--;
21            }
22            }else if(nums[i]+nums[j]+nums[k]>0) {
23                k--;
24            }else{
25                j++;
26            }
27        }
28       }
29       return finalans;
30    }
31};