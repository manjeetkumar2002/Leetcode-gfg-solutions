class Solution {
  public:
    vector<vector<int>> arrayOfPairs(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        int n = arr.size();
        int l = 0;
        int r = n-1;
        while(l<=r){
            ans.push_back({arr[l++],arr[r--]});
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna