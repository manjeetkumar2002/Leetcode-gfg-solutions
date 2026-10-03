class Solution {
  public:
    string largestNumber(int n, int s) {
        // code here
        string ans;
        
        for(int i=0;i<n;i++){
            int digit = 9;
            while(digit>s){
                digit--;
            }
            ans+=(digit+'0');
            s-=digit;
        }
        
        if(s<=0) return ans;
        
        return "-1";
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna