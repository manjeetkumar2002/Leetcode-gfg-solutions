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
  void inorder(Node * root,vector<Node*> &ans){
          if(!root) return;

          inorder(root->left,ans);
          ans.push_back(root);
          inorder(root->right,ans);
      }
    int findCeil(Node* root, int x) {
        // code here
        vector<Node *> ans;
        inorder(root,ans);
        int ceil = -1;
        
        for(int i=0;i<ans.size();i++){
            if(ans[i]->data>=x){
                return ans[i]->data;
            }
        }
        return ceil;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna