/* Binary Tree Node Structure
class Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root,vector<int>& arr){
        if(!root){
            return;
        }
        
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    bool findTarget(Node *root, int target) {
        // code here.
        vector<int> arr;
        inorder(root,arr);
        
        int start= 0;
        int end =arr.size()-1;
        
        while(start<end){
            int sum = arr[start]+arr[end];
            if(sum==target) return true;
            
            else if(sum>target){
                end--;
            }
            else{
                start++;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna