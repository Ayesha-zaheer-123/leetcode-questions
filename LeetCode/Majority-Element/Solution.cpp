1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        unordered_map<int,int>mpp;
6        for(int i=0;i<n;i++) {
7            mpp[nums[i]]++;
8        }
9        int maxi=0;
10        int ans=0;
11        for(auto it:mpp) {
12if(it.second>maxi) {
13maxi=it.second;
14ans=it.first;
15}
16        }
17        return ans;
18    }
19};