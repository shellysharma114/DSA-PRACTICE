class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int minSoFar = prices[0];
        int profit =0;
        for(int i=0;i<len;i++){
            minSoFar = min(minSoFar , prices[i]);
            profit = max(profit,prices[i]-minSoFar);
        }
        return profit;
    }
};

