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
TreeNode * create(vector<int> & preorder,int& index,int& lower,int& upper){

    if(index==preorder.size()) return nullptr;

    
    if(preorder[index]<lower or preorder[index]>upper) return nullptr;

    // if current preorder node lies in the range (lower,upper) create it
    TreeNode * root = new TreeNode(preorder[index]);
    index++;
    root->left = create(preorder,index,lower,root->val);
    root->right = create(preorder,index,root->val,upper);
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int lower = INT_MIN;
    int upper = INT_MAX;
    int index = 0;
    return create(preorder,index,lower,upper);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna