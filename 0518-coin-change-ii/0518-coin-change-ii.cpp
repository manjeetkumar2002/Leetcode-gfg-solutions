
class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        vector<int> dp(amount + 1, 0);

        dp[0] = 1;

        for (int coin : coins)
        {
            for (int j = coin; j <= amount; j++)
            {
                long long ways = (long long)dp[j] + dp[j - coin];

                dp[j] = min(ways, (long long)INT_MAX);
            }
        }

        return dp[amount];
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna