class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        int left = 0;
        int right = prices.size() - 1;

        int priceSize = prices.size();
        for(int i{ 0 }; i < priceSize - 1; i++) {
            left = 0;
            right = priceSize - 1;

            while (left < i) {
                maxProfit = max(maxProfit, prices[i] - prices[left]);
                left++;
            }
            while (right > i) {
                maxProfit = max(maxProfit, prices[right] - prices[i]);
                right--;
            }
        }

        return max(maxProfit, 0);
    }
};
