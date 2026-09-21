1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int n =arr.size();
5        int nums=1;
6        int i=0;
7        while(i<n&&k>0) {
8            if(arr[i]==nums) {
9                i++;
10            }else {
11                k--;
12            }
13            nums++;
14        }
15    while(k>0) {
16        k--;
17nums=nums+1;
18    }
19        
20        return nums-1;
21    }
22};