class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int count=0;
        int maxcount=0;
        int el=0;
for(int i=0;i<n;i++) {
    if(el==nums[i]) {
        count++;
    }else if(count==0) {
        el=nums[i];
        count=1;
    }else{
        count--;
    }
}
return el;
    }
};
