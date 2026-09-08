/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void find(Node *root,int& k,int &ans){
      if(!root) return;
      
      find(root->left,k,ans);
      k--;
      if(k==0){
          ans = root->data;
          return;
      }
      find(root->right,k,ans);
  }
    int kthSmallest(Node *root, int k) {
        // code here
        int ans = -1;
        find(root,k,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna