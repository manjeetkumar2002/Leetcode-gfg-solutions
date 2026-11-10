class Solution {
public:
   int find(vector<int>& nums,int n,int index,vector<int>& dp){
    if(index>=n) return 0;
    if(dp[index]!=-1) return dp[index];
    // can rob
    int res1 = nums[index] + find(nums,n,index+2,dp);
    // can't rob
    int res2 = find(nums,n,index+1,dp);

    dp[index] =  max(res1,res2);
    return dp[index];
}
int rob(vector<int>& nums){
    int n = nums.size();
    // edge case
    if(n==1) return nums[0];
    vector<int> dp1(n+2,-1);
    vector<int> dp2(n+2,-1);
    // phase1 : find answer from 0 to n-1 index
    // phase2 : find answer from 1 to n index
    return max(find(nums,n-1,0,dp1),find(nums,n,1,dp2));
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna