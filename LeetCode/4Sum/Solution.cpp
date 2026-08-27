class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n=nums.size();
    vector<vector<int>>finalans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++) {
        if(i>0&&nums[i]==nums[i-1])continue;
        for(int j=i+1;j<n;j++) {
            int k=j+1;
            if(j>i+1&&nums[j]==nums[j-1]) continue;
            int l=n-1;
            while(k<l) {
                if ((long long) nums[i]+nums[j]+nums[k]+nums[l]==target) {
finalans.push_back({nums[i],nums[j],nums[k],nums[l]});
k++;
l--;
while(k<l&&nums[k]==nums[k-1]) k++;
while(k<l&&nums[l]==nums[l+1]) l--;
                } else if((long long) nums[i]+nums[j]+nums[k]+nums[l]>target) {
                    l--;
                }else{
                    k++;
                }
            }
        }
    }
    return finalans;
    }
};
