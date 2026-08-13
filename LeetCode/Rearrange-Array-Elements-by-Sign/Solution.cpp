class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++) {
            if(nums[i]>=0) {
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        int n1=pos.size();
    int n2=neg.size();
    int i=0;
    int j=0;
    int k=0;
    while(i<n1&&j<n2) {
        nums[k]=pos[i];
        i++;
        k++;
        nums[k]=neg[j];
        j++;
        k++;
    }
    while(i<n1) {
        nums[k]=pos[i];
        i++;
        k++;
    }
     while(j<n2) {
    nums[k]=neg[j];
        j++;
        k++;
    }
    return nums;
    }
};
