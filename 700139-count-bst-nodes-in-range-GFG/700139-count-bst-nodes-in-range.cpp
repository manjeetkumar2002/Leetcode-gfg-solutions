/* Binary Tree Node Structure
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
    void solve(Node*root,int l,int h,int& count){
        if(!root){
            return;
        }
        
        if(root->data>=l and root->data<=h){
            count++;
        }
        
        solve(root->left,l,h,count);
        solve(root->right,l,h,count);
    }
    int getCount(Node *root, int l, int h) {
        // code here
        int count = 0;
        solve(root,l,h,count);
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna