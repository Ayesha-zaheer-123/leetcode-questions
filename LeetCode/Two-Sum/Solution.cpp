class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
 unordered_map<int,int> mpp;
 vector<int>ans;
 int n=nums.size();
  for(int i = 0; i < n; i++) {
       int value = target - nums[i];
       if(mpp.find(value) != mpp.end()) {
           ans.push_back(i);
           ans.push_back(mpp[value]);
          return ans;
       }
        mpp[nums[i]] = i;
    }
   return {-1, -1};
   }
};
