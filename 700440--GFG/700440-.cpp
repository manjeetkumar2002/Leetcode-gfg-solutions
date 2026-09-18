/* Structure of a Binary Search Tree node
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
}; */

class Solution {
  public:
    void inorder(Node *root, vector<int> &ans){
        if (!root)
            return;

        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    vector<int> merge(Node *r1, Node *r2) {
        // find the inorder of both tree 
        // store both in third array and sort it
        vector<int> ans1,ans2,res;

        inorder(r1,ans1);
        inorder(r2,ans2);

        for(int i:ans1)
        res.push_back(i);
        
        for(int i:ans2)
        res.push_back(i);
        sort(res.begin(),res.end());
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna