class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int n=nums.size();
        if(n==1) return nums[0];
          if (nums[0] != nums[1])
            return nums[0];
        while(low<=high) {
            int mid=(low+high)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])  {
                return nums[mid];
            }else if(mid%2==1) {
                if(nums[mid]==nums[mid-1]) {
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }else{
                if(nums[mid]==nums[mid-1]) {
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }
        return nums[low-1];
    }
};
