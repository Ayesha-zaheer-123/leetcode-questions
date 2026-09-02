1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4       int n=s.size();
5       int end=n-1;
6      int start=0;
7       while(start<=end) {
8    swap(s[start],s[end]);
9    start++;
10    end--;
11       }
12    }
13};