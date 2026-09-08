class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi=INT_MIN;
                int n = arr.size();
                for(int i=0;i<n;i++){
                   maxi = max(maxi,arr[i]);
                }
                return maxi;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna