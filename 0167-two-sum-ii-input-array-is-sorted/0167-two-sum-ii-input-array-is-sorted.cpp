class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
      int start = 0;
    int end = arr.size() - 1;
    vector<int> ans = {-1,-1};
    while (start <= end)
    {
        int sum = arr[start]+arr[end];
        if(sum==target){
            ans[0] = start+1;
            ans[1] = end+1;
            break;
        }
        else if(sum<target){
            start++;
        }
        else{
            end--;
        }
    }

    return ans;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna