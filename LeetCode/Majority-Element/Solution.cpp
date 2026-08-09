class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++) {
            mpp[nums[i]]++;
        }
        int maxi=0;
        int ans=0;
        for(auto it:mpp) {
if(it.second>maxi) {
maxi=it.second;
ans=it.first;
}
        }
        return ans;
    }
};
