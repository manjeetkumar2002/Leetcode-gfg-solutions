
class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        int n = coins.size();

        vector<int> dp(amount + 1, 0);
        dp[0] = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = coins[i]; j <= amount; j++)
            {
                long long ways = (long long)dp[j] + dp[j - coins[i]];

                dp[j] = min(ways, (long long)INT_MAX);
            }
        }

        return dp[amount];
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna