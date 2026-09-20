/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:

  Node* correctBST(Node* root) {
      Node * curr = NULL;
      Node * first = NULL;
      Node * second = NULL;
      Node * last = NULL;
      Node * present = NULL;
        Node * original = root;
      while(root){
          // left side not exist
          if(!root->left){
              last = present;
              present = root;
              if(last && last->data>present->data){
                  if(!first){
                      first = last;
                  }
                  second = present;
              }
              root = root->right;
          }
          // left side exist
          else{
              //check last side already traversed or not
              curr = root->left;
              while(curr->right and curr->right!=root){
                  curr=curr->right;
              }
              // link not present
              if(!curr->right){
                  curr->right = root;
                  root=root->left;
              }
              // link present
              else{
                  curr->right = NULL;
                  last = present;
                  present = root;
                  if(last && last->data>present->data){
                      if(!first){
                          first = last;
                      }
                      second = present;
                  }
                  root = root->right;
              }
             
          }
           
      }

      int num = first->data;
      first->data = second->data;
      second->data = num;
        return original;
  }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna