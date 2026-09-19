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
void inorder(TreeNode *root, vector<int> &ans){
      if (!root)
          return;

      inorder(root->left, ans);
      ans.push_back(root->val);
      inorder(root->right, ans);
  }
  TreeNode * create(vector<int>& arr,int start,int end){
          if(start>end){
              return nullptr;
          }
          int mid = (start+end)/2;

          TreeNode * root = new TreeNode(arr[mid]);

          root->left = create(arr,start,mid-1);
          root->right = create(arr,mid+1,end);

          return root;
      }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        
        return create(ans,0,ans.size()-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna