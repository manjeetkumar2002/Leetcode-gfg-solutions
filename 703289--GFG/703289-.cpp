class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int start = 0;
        int end = arr.size()-1;
        
        while(start<end){
            while(start<end and arr[start]==0) start++;
            while(start<end and arr[end]==1) end--;
            
            if(start<end){
                swap(arr[start],arr[end]);
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna