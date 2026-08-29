1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4         int positive = nums[0];
5    int negative = nums[0];
6    int answer = nums[0];
7    for(int i = 1; i < nums.size(); i++) {
8        int x = nums[i];
9        int newPositive = max({
10            x,
11            x * positive,
12            x * negative
13        });
14        int newNegative = min({
15            x,
16            x * positive,
17            x * negative
18        });
19
20        positive = newPositive;
21        negative = newNegative;
22        answer = max(answer, positive);
23    }
24
25    return answer;
26    }
27};