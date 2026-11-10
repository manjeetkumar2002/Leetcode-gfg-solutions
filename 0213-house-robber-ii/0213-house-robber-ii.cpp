class Solution {
public:
   int rob(vector<int>& nums){
    int n = nums.size();
    // edge case
    if(n==1) return nums[0];
    vector<int> dp1(n+2,-1);
    // phase1 : find answer from 0 to n-1 index
    dp1[n-1] = 0;
    dp1[n] = 0;
    for(int i=n-2;i>=0;i--){
        dp1[i] = max(nums[i]+dp1[i+2],dp1[i+1]);
    }
    // phase2 : find answer from 1 to n index
    vector<int> dp2(n+2,-1);
     dp2[n+1] = 0;
    dp2[n] = 0;
    for(int i=n-1;i>0;i--){
        dp2[i] = max(nums[i]+dp2[i+2],dp2[i+1]);
    }

    return max(dp1[0],dp2[1]);
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna