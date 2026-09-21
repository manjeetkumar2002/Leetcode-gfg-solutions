class Solution {
  public:
  int firstOccurence(vector<int> &arr,int target){
      int start = 0;
      int end =arr.size()-1;
      int index = arr.size();
      while(start<=end){
          int mid = start+(end-start)/2;

          if(arr[mid]==target){
              index = mid;
              end = mid-1;
          }
          else if(target<arr[mid]){
              start = mid+1;
          }
          else{
              end = mid-1;
          }
      }
      return index;
  }
    int countZeroes(vector<int> &arr) {
        // code here
        return arr.size()-firstOccurence(arr,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna