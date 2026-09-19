class Solution {
  public:
  int countLeafs(vector<int> &preorder,int& index,int& lower,int& upper, vector<int>& ans){
        if(index==preorder.size()) return 0;

        if(preorder[index]<lower or preorder[index]>upper) return 0;

        // if current preorder node lies in the range (lower,upper) create it
        int value = preorder[index];
        index++;
        int left = countLeafs(preorder,index,lower,value,ans);
        int right = countLeafs(preorder,index,value,upper,ans);
        if(!left and !right){
            ans.push_back(value);
        }
        return 1;
  }
    vector<int> leafNodes(vector<int>& preorder) {
        // code here
        int lower = INT_MIN;
        int upper = INT_MAX;
        int index = 0;
        vector<int> ans;
        countLeafs(preorder,index,lower,upper, ans);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna