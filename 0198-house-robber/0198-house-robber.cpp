class Solution {
public:
int rob(vector<int>&nums){
    int n = nums.size();
    vector<int> dp(n+2,-1);
    dp[n+1] = 0;
    dp[n] = 0;

    for(int i=n-1;i>=0;i--){
        int res1  = nums[i] + dp[i+2];
        int res2 = dp[i+1];
        dp[i] = max(res1,res2); 
    }

    return dp[0];
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna