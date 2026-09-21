class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int index;
        while(start<=end){
            // int mid = start+(end-start)/2;
            int mid = end + (start-end)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
                index = mid;
                break;
            }
            else if(arr[mid]>arr[mid-1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return index;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna