class Solution {
  public:
  void checkBST(vector<int> &preorder,int& index,int& lower,int& upper){

      if(index==preorder.size()) return;

      if(preorder[index]<lower or preorder[index]>upper) return;

      // if current preorder node lies in the range (lower,upper) create it
      int value = preorder[index];
      index++;
      checkBST(preorder,index,lower,value);
      checkBST(preorder,index,value,upper);
  }
    bool canRepresentBST(vector<int> &pre) {
        // code here
        int lower = INT_MIN;
           int upper = INT_MAX;
           int index = 0;
           checkBST(pre,index,lower,upper);

           if(index==pre.size()) return true;
           else return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna