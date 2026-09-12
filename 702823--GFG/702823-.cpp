class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        if(m==0 or m>a.size()) return 0;
        sort(a.begin(),a.end());
        
        int minDiff = INT_MAX;
        for(int i=0;i+m-1<a.size();i++){
            minDiff = min(minDiff,a[i+m-1]-a[i]);
        }
    
        return minDiff;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna