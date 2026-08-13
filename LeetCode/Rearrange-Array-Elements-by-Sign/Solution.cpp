1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        int n=nums.size();
5        vector<int>pos;
6        vector<int>neg;
7        vector<int>ans;
8        for(int i=0;i<n;i++) {
9            if(nums[i]>=0) {
10                pos.push_back(nums[i]);
11            }else{
12                neg.push_back(nums[i]);
13            }
14        }
15        int n1=pos.size();
16    int n2=neg.size();
17    int i=0;
18    int j=0;
19    while(i<n1&&j<n2) {
20        ans.push_back(pos[i]);
21        i++;
22        ans.push_back(neg[j]);
23        j++;
24    }
25    while(i<n1) {
26        ans.push_back(pos[i]);
27        i++;
28    }
29     while(j<n2) {
30        ans.push_back(neg[j]);
31        j++;
32    }
33    return ans;
34    }
35};