// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        long long prefix=0;
        long long maxi=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            maxi=max(maxi,prefix);
            
            if(prefix<0){
                prefix=0;
            }
        }
        return maxi;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna