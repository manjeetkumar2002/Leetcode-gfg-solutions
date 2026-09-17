/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  void preorder(Node *root,int level,vector<int>& temp){
      if(!root){
          return ;
      }
      if(!root->left and !root->right){
        temp.push_back(level);
      }
      preorder(root->left,level+1,temp);
      preorder(root->right,level+1,temp);
  }
    int getCount(Node *root, int k) {
        // code here
        
        vector<int> temp; // store the levels of the leaves nodes
        preorder(root,1,temp);
        
        sort(temp.begin(),temp.end());        
        int count = 0;


        for(int lvl:temp){
            if(k>=lvl){
                k-=lvl;
                count++;
            }
            else{
                break;
            }
        }
        return count;















        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna