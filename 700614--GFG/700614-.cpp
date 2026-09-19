/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
    void inorder(Node * root,vector<Node*> &ans){
        if(!root) return;
        
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // find the inorder traversal
        vector<Node *> ans;
        inorder(root,ans);
        Node * pred = NULL;
        Node * succ = NULL;
        
        for(int i=0;i<ans.size();i++){
            if(ans[i]->data<key){
                pred = ans[i];
            }
            
            if(ans[i]->data>key && succ==NULL)
            {
                succ = ans[i];
            }
        }
        return {pred,succ};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna