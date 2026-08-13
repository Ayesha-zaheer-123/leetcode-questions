1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        int n=nums.size();
5        vector<int>pos;
6        vector<int>neg;
7        for(int i=0;i<n;i++) {
8            if(nums[i]>=0) {
9                pos.push_back(nums[i]);
10            }else{
11                neg.push_back(nums[i]);
12            }
13        }
14        int n1=pos.size();
15    int n2=neg.size();
16    int i=0;
17    int j=0;
18    int k=0;
19    while(i<n1&&j<n2) {
20        nums[k]=pos[i];
21        i++;
22        k++;
23        nums[k]=neg[j];
24        j++;
25        k++;
26    }
27    while(i<n1) {
28        nums[k]=pos[i];
29        i++;
30        k++;
31    }
32     while(j<n2) {
33    nums[k]=neg[j];
34        j++;
35        k++;
36    }
37    return nums;
38    }
39};