/*Structure of binary tree node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
    Node* deleteNode(Node* root, int k) {
        // code here
        if(!root) return nullptr;
        
        
        if(root->data>=k){
            return deleteNode(root->left,k);
        }

        root->right = deleteNode(root->right,k);
        
        return root;
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna