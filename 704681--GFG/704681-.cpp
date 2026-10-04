class Solution {
  public:
    int maxNumbers(int k, vector<int> &arr) {
        // code here
        set<int> s;
        for(int i = 0;i<arr.size();i++)
        s.insert(arr[i]);
        int sum = 0;
        int count = 0;
        for(int i=1;i<k;i++){
            if(s.find(i)==s.end()){
                sum+=i;
                if(sum>k){
                    break;
                }
                count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna