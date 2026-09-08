/* Structure of tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
    void find(Node*root,int low,int high,vector<int>&ans){
        if(!root) return;
        if(root->data>low){
            find(root->left,low,high,ans);
        }
        
        
        if(root->data>=low and root->data<=high){
            ans.push_back(root->data);
        }
        
        if(root->data<high){
           find(root->right,low,high,ans); 
        }
    }
    vector<int> nodesInRange(Node *root, int low, int high) {
        // code here
        vector<int> ans;
        
        find(root,low,high,ans);
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna