/*
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
  void inorder(Node *root,vector<int>&ans){
             if(!root) return ;

             inorder(root->left,ans);
             ans.push_back(root->data);
             inorder(root->right,ans);
         }
    vector<int> getSortedOrder(Node* root) {
        // Code here
        vector<int> ans;
        inorder(root,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna