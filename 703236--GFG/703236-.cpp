class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        sort(arr.begin(),arr.end());
        // code here
        int start = 0;
        int end = arr.size() - 1;

        while (start < end)
        {
            long long int product = 1LL * arr[start]*arr[end];
            if(product==target){
                return true;
            }
            else if(product<target){
                start++;
            }
            else{
                end--;
            }
        }

        return false;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna