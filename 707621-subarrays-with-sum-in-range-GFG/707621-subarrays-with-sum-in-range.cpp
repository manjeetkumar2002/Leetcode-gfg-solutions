class Solution {
  public:
  
    int countAtMost(vector<int> & arr,int k){
        if(k<0) return 0;
        long long sum = 0;
        long long count = 0;
        int left = 0;
        
        for(int right = 0;right<arr.size();right++){
            sum+=arr[right];
            
            while(sum>k){
                sum-=arr[left];
                left++;
            }
            
            count+=(right-left+1);
        }
        return count;
    }
    int countSubarray(vector<int>& arr, int l, int r) {
        return countAtMost(arr,r) - countAtMost(arr,l-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna