/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
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
  void fixtree(Node*root,vector<int>& arr,int & index){
       if (!root)
          return;

      fixtree(root->left, arr,index);
      root->data = arr[index++];
      fixtree(root->right, arr,index);
  }
    Node* correctBST(Node* root) {
        // code here
        vector<int> tree;
        inorder(root,tree);
        int first = -1;
                int second = -1;
                for(int i=1;i<tree.size();i++){
                    if(tree[i]<tree[i-1] and first==-1){
                        first = i-1;
                        second = i;
                    }
                    else if(tree[i]<tree[i-1]){
                        second = i;
                    }
                }
                swap(tree[first],tree[second]);

        // fix the tree
        int index =0;
        fixtree(root,tree,index);
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna