class Solution {
  public:
    void solve(long long int n,vector<long long>& ans){
       
        if(n==1){
            ans.push_back(1);
            return;
        }
        
        ans.push_back(n);
        if(n%2==0){
            solve(sqrt(n),ans);
        }
        else{
            solve(pow(n,1.5),ans);    
        }
        
    }
    
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long> ans;
        solve(n,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna