class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<=nums[nums.size()-1]) return nums[0];
         int start = 0;
    int end = nums.size()-1;
    int result;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(nums[0]<nums[mid]){
            start = mid+1;
        }
        else if(nums[0]>nums[mid]){
            result = nums[mid];
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna