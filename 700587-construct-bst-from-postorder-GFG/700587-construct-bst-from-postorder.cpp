/* Structure of tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
  Node * createFromPostorder(vector<int> &postorder,int& index,int& lower,int& upper){

      if(index<0) return nullptr;

      if(postorder[index]<lower or postorder[index]>upper) return nullptr;

      Node * root = new Node(postorder[index]);
      index--;
      root->right = createFromPostorder(postorder,index,root->data,upper);
      root->left = createFromPostorder(postorder,index,lower,root->data);
      return root;
  }
    Node* constructTree(vector<int>& post) {
        // code here
        int lower = INT_MIN;
            int upper = INT_MAX;
            int index = post.size()-1;
            return createFromPostorder(post,index,lower,upper);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna