class Solution {
  public:
  int step(int stair,int n,vector<int>& dp){
      if(stair==n) return 1;
      if(stair>n) return 0;

      if(dp[stair]!=-1) return dp[stair];

      dp[stair] = step(stair+1,n,dp)+ step(stair+2,n,dp);
      return dp[stair];
  }
  int climbStairs(int n){
      vector<int> dp(n+2,-1);
      return step(0,n,dp);
  }
    int countWays(int n) {
        // code here
        return climbStairs(n);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna