1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int n=nums.size();
5        int result=0;
6        for(int i=0;i<n;i++) {
7            result^=nums[i];
8        }
9        return result;
10    }
11};