1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int val=nums1.size();
5    vector<int>ans;
6    int i=0;
7    int j=0;
8    int n2=nums2.size();
9    while(i<m&&j<n) {
10        if(nums1[i]<=nums2[j]) {
11            ans.push_back(nums1[i]);
12            i++;
13        }  else if(nums2[j]<=nums1[i]) {
14            ans.push_back(nums2[j]);
15            j++;
16        }
17    }
18   while(i<m) {
19    ans.push_back(nums1[i]);
20    i++;
21   }
22   while(j<n) {
23    ans.push_back(nums2[j]);
24    j++;
25   }
26
27    for(int i=0;i<ans.size();i++) {
28       nums1[i]=ans[i];
29    }
30    }
31};