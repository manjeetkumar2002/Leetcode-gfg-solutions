/* structure of a binary tree node
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
    void inorder(Node *root,int pathSum,int& maxSum){
        if(!root) return;
        
        
        pathSum += root->data;
        inorder(root->left,pathSum,maxSum);
        
        if(!root->left and !root->right){
            maxSum = max(pathSum ,maxSum);
        }
        inorder(root->right,pathSum,maxSum);
    }
    int maxPathSum(Node* root) {
        // code here
        int pathSum = 0;
        int maxSum = INT_MIN;
        inorder(root,pathSum,maxSum);
        
        return maxSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna