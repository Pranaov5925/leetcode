class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;

        int minimum = prices[0];
        int maxProfit = 0;

        for(int i=1;i<prices.size();i++){
            minimum = min(minimum, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minimum);
        }

        return maxProfit;
    }
};