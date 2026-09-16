class Solution {
  public:
    int dominantPairs(vector<int> &arr) {
        // Code here
        int count = 0;
int n=arr.size();
               sort(arr.begin(),arr.begin()+n/2);
               sort(arr.begin()+n/2,arr.end());

               int right = n/2;
               for(int left=0;left<n/2;left++){

                   while(right<n&&arr[left]>=5*arr[right]){
                       right++;

                   }
                    count+=right-n/2;
               }
               return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna