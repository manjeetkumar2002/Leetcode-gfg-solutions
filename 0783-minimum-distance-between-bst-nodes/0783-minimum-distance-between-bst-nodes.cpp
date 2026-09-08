/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 
void find(TreeNode* root,int& ans,int& prev){
    if(!root) return;

    find(root->left,ans,prev);
    if(prev!=INT_MAX){
        ans = min(ans,abs(root->val-prev));
    }
    prev = root->val;
    find(root->right,ans,prev);
}

    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;

    int prev = INT_MAX;

    find(root,ans,prev);
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna