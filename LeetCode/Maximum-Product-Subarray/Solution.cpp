1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int maxproduct=INT_MIN;
5        int n =nums.size();
6        for(int i=0;i<n;i++) {
7            int product=1;
8            for(int j=i;j<n;j++) {
9product*=nums[j];
10maxproduct=max(maxproduct,product);
11            }
12        }
13        return maxproduct;
14    }
15};