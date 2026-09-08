1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4    int ans=nums[0];
5        for(int i=1;i<nums.size();i++)  {
6         ans^=nums[i];
7        }
8        return ans;
9    }
10};