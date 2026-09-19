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
 class Box{
        public:
        bool BST;
        int sum;
        int min,max;
        Box(){
            BST = 1;
            sum = 0;
            min = INT_MAX;
            max = INT_MIN;
        }
    };
    Box * find(TreeNode*root,int& maxSum){
        // root not exist
        if(!root){
            return new Box();
        }
        // root exist
        Box * lefthead = find(root->left,maxSum);
        Box * righthead = find(root->right,maxSum);
        if(lefthead->BST && righthead->BST && root->val>lefthead->max && root->val<righthead->min){
            Box * head = new Box();
            head->sum = root->val + lefthead->sum+righthead->sum;
            maxSum = max(maxSum,head->sum);
            head->min = min(lefthead->min,root->val);
            head->max = max(righthead->max,root->val);
            return head;
        }
        else{
            lefthead->BST = 0;
            lefthead->sum = 0;
            return lefthead;
        }
    }
    int maxSumBST(TreeNode* root) {
        int maxSum = 0;
        find(root,maxSum);
        return maxSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna