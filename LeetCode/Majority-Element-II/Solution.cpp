1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        vector<int>ans;
5        int n=nums.size();
6        if(n==1) {
7            ans.push_back(nums[0]);
8            return ans;
9        }
10    int count1=0;
11    int count2=0;
12    int el1=INT_MIN;
13    int el2=INT_MIN;
14    for(int i=0;i<n;i++) {
15        if(count1==0&&el2!=nums[i]) {
16            count1=1;
17            el1=nums[i];
18        }else if(count2==0&&el1!=nums[i]) {
19            count2=1;
20            el2=nums[i];
21        } else if(el1==nums[i]) {
22            count1++;
23        } else if(el2==nums[i]) {
24            count2++;
25        }else{
26            count1--;
27            count2--;
28        }
29    }
30count1 = 0;
31count2 = 0;
32for(int i = 0; i < n; i++) {
33    if(nums[i] == el1) count1++;
34    else if(nums[i] == el2) count2++;
35}
36
37if(count1 > n/3) ans.push_back(el1);
38if(count2 > n/3) ans.push_back(el2);
39        return ans;
40            }
41};