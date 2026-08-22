class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0) {
            return 0;
        }
        int smallest=INT_MIN;
        int count=0;
        int largest=1;
        for(int i=0;i<n;i++) {
            if(nums[i]-1==smallest) {
                count++;
                smallest=nums[i];
            }else if(nums[i]!=smallest) {
                count=1;
                smallest=nums[i];
            }
            largest=max(largest,count);
        }
        return largest;
    }
};
