class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int positive = nums[0];
    int negative = nums[0];
    int answer = nums[0];
    for(int i = 1; i < nums.size(); i++) {
        int x = nums[i];
        int newpositive = max({
            x, x * positive,x * negative
        });
        int newnegative = min({
            x, x * positive,x * negative
        });
        positive = newpositive;
        negative = newnegative;
        answer = max(answer, positive);
    }

    return answer;
    }
};
