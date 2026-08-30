1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4         int positive = nums[0];
5    int negative = nums[0];
6    int answer = nums[0];
7    for(int i = 1; i < nums.size(); i++) {
8        int x = nums[i];
9        int newpositive = max({
10            x, x * positive,x * negative
11        });
12        int newnegative = min({
13            x, x * positive,x * negative
14        });
15        positive = newpositive;
16        negative = newnegative;
17        answer = max(answer, positive);
18    }
19
20    return answer;
21    }
22};