class Solution {
public:
int rob(vector<int>&nums){
     int n = nums.size();
    int first = 0;
    int second = 0;
    int res = 0;
    for(int i=n-1;i>=0;i--){
       int res1 = nums[i] + second;
       int res2 = first;

        res = max(res1,res2);
        second = first;
        first = res;
    }

    return res;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna