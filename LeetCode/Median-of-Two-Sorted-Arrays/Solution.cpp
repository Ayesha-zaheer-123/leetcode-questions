1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int n1=nums1.size();
5        int n2=nums2.size();
6        int i=0;
7        vector<int>ans;
8        int j=0;
9        while(i<n1&&j<n2) {
10            if(nums1[i]<=nums2[j]) {
11                ans.push_back(nums1[i]);
12                i++;
13            }else{
14                ans.push_back(nums2[j]);
15                j++;
16            }
17        }
18        while(i<n1) {
19            ans.push_back(nums1[i++]);
20        }
21           while(j<n2) {
22            ans.push_back(nums2[j++]);
23        }
24        int n3=n1+n2;
25        if(n3%2==1) {
26            return (double)ans[n3/2];
27        }
28        return (double)((double)(ans[n3/2])+(double)(ans[n3/2-1]))/2.0;
29    }
30};