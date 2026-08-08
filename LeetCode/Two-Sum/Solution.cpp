1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4 unordered_map<int,int> mpp;
5 vector<int>ans;
6 int n=nums.size();
7    for(int i = 0; i < n; i++) {
8        int value = target - nums[i];
9        if(mpp.find(value) != mpp.end()) {
10            ans.push_back(i);
11            ans.push_back(mpp[value]);
12            return ans;
13        }
14        mpp[nums[i]] = i;
15    }
16    return {-1, -1};
17    }
18};