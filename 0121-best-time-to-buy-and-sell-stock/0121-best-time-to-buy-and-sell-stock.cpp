class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maximum = 0; //global state
        int minLocal = 10005;
        for (int i = 0; i < n; ++i) {
            if (i > 0) {
                maximum = max(maximum, prices[i] - minLocal);
            }
            minLocal = min(minLocal, prices[i]);
        }
        return maximum;
    }
};