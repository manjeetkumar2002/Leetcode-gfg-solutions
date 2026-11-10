class Solution {
public:
   int find(int i,int amt,vector<int>&coins,int n,vector<vector<int>>&dp){
    // base cases
    if(amt==0) return 1;
    if(amt<0) return 0;
    if(i>=n) return 0;
    if(dp[i][amt]!=-1){
        return dp[i][amt];
    }
    // use the coin & dont use the coins
    dp[i][amt] = find(i,amt-coins[i],coins,n,dp) + find(i+1,amt,coins,n,dp);
    return dp[i][amt];
}
int change(int amt , vector<int>& coins){
    int n = coins.size();
    vector<vector<int>> dp(n+1,vector<int>(amt+1,-1));
    return find(0,amt, coins,n,dp);
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna