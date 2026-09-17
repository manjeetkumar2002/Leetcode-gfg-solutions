class Solution {
  public:
    bool checkIdentical(vector<int> &a, vector<int> &b) {
        // code here
        if(a.size()!=b.size()) return false;
        for(int i=0;i<a.size();i++)
        if(a[i]!=b[i]) return false;
        
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna