class Solution {
public:
int findfirst(vector<int>&nums, int target) {
int low=0;
int n=nums.size();
int high=n-1;
int first=-1;
while(low<=high) {
    int mid=(low+high)/2;
    if(nums[mid]==target) {
first=mid;
high=mid-1;
    }else if(nums[mid]<target) {
        low=mid+1;
    }else{
        high=mid-1;
    }
} 
 return first;
}
int findsecond(vector<int>&nums, int target) {
int low=0;
int n=nums.size();
int high=n-1;
int second=-1;
while(low<=high) {
    int mid=(low+high)/2;
    if(nums[mid]==target) {
second=mid;
low=mid+1;
    }else if(nums[mid]<target) {
        low=mid+1;
    }else{
        high=mid-1;
    }
}
    return second;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
       int firstelement=findfirst(nums,target);
       if(firstelement==-1) return {-1,-1};
   int secondelement=findsecond(nums,target);
return {firstelement,secondelement};
    }
};
