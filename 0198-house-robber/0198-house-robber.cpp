class Solution {
public:
int find(vector<int>&nums,int &n,int index,vector<int>&dp){
    if(index>=n) return 0;
    if(dp[index]!=-1) return dp[index];
    // can rob
    int res1 = nums[index] + find(nums,n,index+2,dp);

    // can't rob
    int res2 =  find(nums,n,index+1,dp);

    dp[index] =  max(res1,res2);
    return dp[index];
}
int rob(vector<int>&nums){
    int n = nums.size();
    vector<int> dp(n+1,-1);
    return find(nums,n,0,dp);
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna