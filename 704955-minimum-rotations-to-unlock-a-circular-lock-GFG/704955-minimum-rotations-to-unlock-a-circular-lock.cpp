class Solution {
  public:
    int rotationCount(int r, int d) {
        // code here
        int ans = 0;
        while(r){
            int first = r%10;
            int second = d%10;
            ans+=min(abs(first-second),10-abs(first-second));
            r/=10;
            d/=10;
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna