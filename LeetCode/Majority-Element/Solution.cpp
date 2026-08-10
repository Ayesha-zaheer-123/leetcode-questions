1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        int ans=0;
6        int count=0;
7        int maxcount=0;
8        int el=0;
9for(int i=0;i<n;i++) {
10    if(el==nums[i]) {
11        count++;
12    }else if(count==0) {
13        el=nums[i];
14        count=1;
15    }else{
16        count--;
17    }
18}
19return el;
20    }
21};