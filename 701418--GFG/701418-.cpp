class Solution {
  public:
 
    int countWays(int n) {
        // code here
       vector<int> dp(n+2,-1);

           dp[n+1] = 0;
           dp[n] = 1;

           for(int i=n-1;i>=0;i--){
               dp[i] = dp[i+1]+dp[i+2];
           }

           return dp[0];
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna