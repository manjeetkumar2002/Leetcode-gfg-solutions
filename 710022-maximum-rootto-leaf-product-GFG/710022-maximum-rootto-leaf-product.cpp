/* Structure of tree Node
class Node {
  public:
    int data;
    Node *left, *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void solve(Node *root,int path,int& ans){
        if(!root) return;
        path*=root->data;
        solve(root->left,path,ans);
        
        
        if(!root->left and !root->right)
        ans = max(ans,path);
        solve(root->right,path,ans);
        
    }
    int maxProduct(Node* root) {
        // code here
        if(!root) return 0;
        int ans = 1;
        int path  = 1;
        solve(root,path,ans);
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna