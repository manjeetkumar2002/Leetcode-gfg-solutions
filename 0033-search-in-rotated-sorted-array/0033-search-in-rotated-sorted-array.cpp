class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
    int end = nums.size()-1; 
    int index = -1;

    while(start<=end){
        int mid = start+(end-start)/2;

        if(nums[mid]==target){
            index = mid;
            break;
        }
        // left sorted part
        else if(nums[0]<=nums[mid]){
            if(target>=nums[start] and target<=nums[mid]){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        // right sorted part
        else{
            if(target<=nums[end] and target>=nums[mid]){
                start = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return index;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna