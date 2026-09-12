/* Structure of a Binary Search Tree node
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
};
*/

class Solution {
  public:
    
    Node* findLCA(Node* root, Node* n1, Node* n2) {
        // code here
        if(!root) return NULL;
        
        
        // if both node are less than root go on left
        if(n1->data<root->data and n2->data<root->data){
            return findLCA(root->left,n1,n2);
        }
        else if(n1->data>root->data and n2->data>root->data){
            return findLCA(root->right,n1,n2);
        }
        else{
            return root;
        }
        // if both node are greater than root go on right
        // if both node are diversing then this is the common ancestor 
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna