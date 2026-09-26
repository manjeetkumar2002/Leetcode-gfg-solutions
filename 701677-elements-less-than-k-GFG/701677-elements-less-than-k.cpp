class Solution {
  public:
    vector<int> elementsLessThanK(vector<int> &arr, int k) {
        // code here
         vector<int> ans;
         for(int i:arr){
             if(i<k){
                 ans.push_back(i);
             }
         }
         return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna