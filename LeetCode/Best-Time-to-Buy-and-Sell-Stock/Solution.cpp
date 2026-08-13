class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
      int buy=prices[0];
      int profit=0;
        for(int j=1;j<n;j++) {
            if(prices[j]<buy) {
    buy=prices[j];
            }else if(prices[j]-buy>profit){
    profit=prices[j]-buy;
            }
        }
return profit;
    }
};
