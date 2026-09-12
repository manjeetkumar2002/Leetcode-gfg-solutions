/* Structure of a tree Node
class Node {
public:
    int key;
    node *left;
    node *right;

    node(int x) {
        key = x;
        left = nullptr;
        right = nullptr;
    }
};*/
class Solution {
  public:
  
  Node * minValueNode(Node * root){
          Node *current = root;
          while(current && current->left!=NULL){
              current = current->left;
          }
          return current;
  }
  Node* delNode(Node* root, int x) {
      // code here
          if(!root) return nullptr;

          if(x<root->key){
              root->left = delNode(root->left,x);
          }
          else if(x>root->key){
              root->right = delNode(root->right,x);
          }
          else{
              //case 1 and 2 : node have no childrens or 1 child
              // no children exist
              if(!root->left and !root->right){
                  delete root;
                  return nullptr;
              }
              // right child exist
              if(!root->left){
                  Node * temp = root->right;
                  delete root;
                  return temp;
              }
              // left child exist
              if(!root->right){
                  Node * temp = root->left;
                  delete root;
                  return temp;
              }

              // both child exist
              // 1.change root data with (min node from right subtree)
              // 2.delete the inorder successor

              Node * temp = minValueNode(root->right);
              root->key = temp->key;
              root->right = delNode(root->right,temp->key);

          }
          return root;
  }
  Node * insert(Node *root,int value){
      if(!root){
          return new Node(value);
      }

      if(value<=root->key){
          root->left = insert(root->left,value);
      }
      else{
          root->right = insert(root->right,value);
      }
      return root;
  }
    Node* changeKey(Node* root, int oldVal, int newVal) {
        // code here
        root = delNode(root,oldVal);
        return insert(root,newVal);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna