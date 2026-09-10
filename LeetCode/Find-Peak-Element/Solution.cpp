class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return -1;
        if(n==1) return 0;
        if(nums[n-1]>nums[n-2]) {
            return n-1;
        }
        int low=0;
        int high=n-2;
        while(low<=high) {
            if(low==0) {
                if(nums[low]>nums[low+1]) {
                    return low;
                }
        low++;
            }
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]) {
                return mid;
            }if(nums[mid]<nums[mid-1]) {
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return -1;
    }
};
