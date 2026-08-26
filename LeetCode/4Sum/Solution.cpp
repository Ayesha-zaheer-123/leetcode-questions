1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4    int n=nums.size();
5    vector<vector<int>>finalans;
6    sort(nums.begin(),nums.end());
7    for(int i=0;i<n;i++) {
8        if(i>0&&nums[i]==nums[i-1])continue;
9        for(int j=i+1;j<n;j++) {
10            int k=j+1;
11            if(j>i+1&&nums[j]==nums[j-1]) continue;
12            int l=n-1;
13            while(k<l) {
14                if ((long long) nums[i]+nums[j]+nums[k]+nums[l]==target) {
15finalans.push_back({nums[i],nums[j],nums[k],nums[l]});
16k++;
17l--;
18while(k<l&&nums[k]==nums[k-1]) k++;
19while(k<l&&nums[l]==nums[l+1]) l--;
20                } else if((long long) nums[i]+nums[j]+nums[k]+nums[l]>target) {
21                    l--;
22                }else{
23                    k++;
24                }
25            }
26        }
27    }
28    return finalans;
29    }
30};