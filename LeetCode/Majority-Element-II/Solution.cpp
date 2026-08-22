1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        vector<int>ans;
5        int n=nums.size();
6        if(n==1) {
7            ans.push_back(nums[0]);
8            return ans;
9        }
10        for(int i=0;i<n;i++) {
11            int count=0;
12            if(ans.size()==0||ans[0]!=nums[i]) {
13            for(int j=0;j<n;j++) {
14                if(nums[i]==nums[j]) {
15                    count++;
16                } 
17            }
18                
19                if(count>n/3) {
20                    ans.push_back(nums[i]);
21                }
22                if(ans.size()==2) break;
23            }
24        }
25        return ans;
26            }
27};