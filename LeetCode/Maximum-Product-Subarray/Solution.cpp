1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4         int positive = nums[0];
5    int negative = nums[0];
6
7    int answer = nums[0];
8
9    for(int i = 1; i < nums.size(); i++) {
10
11        int x = nums[i];
12
13        int newPositive = max({
14            x,
15            x * positive,
16            x * negative
17        });
18
19        int newNegative = min({
20            x,
21            x * positive,
22            x * negative
23        });
24
25        positive = newPositive;
26        negative = newNegative;
27
28        answer = max(answer, positive);
29    }
30
31    return answer;
32    }
33};