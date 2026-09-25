1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int low=0;
5     int high=arr.size()-1;
6     while(low<=high) {
7        int mid=(low+high)/2;
8        int missing=arr[mid]-(mid+1);
9        if(missing<k) {
10            low=mid+1;
11        }else{
12            high=mid-1;
13        }
14     }
15     return low+k;
16    }
17};