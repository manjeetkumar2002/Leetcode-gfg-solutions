/* Tree Node structure
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    bool solve(Node*root,int lower,int upper){
        if(!root){
            return 0;
        }
        
        // left node
        if(!root->left and !root->right){
            if(root->data-lower == 1 and upper-root->data == 1){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        return solve(root->left,lower,root->data) || solve(root->right,root->data,upper);
    }
    bool isDeadEnd(Node *root) {
        // Code here
        return solve(root,0,INT_MAX);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna