/* Structure of tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
    int maxLevelSum(Node* root) {
        // code here
        int ans = 0;
        if(!root) return 0;
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            int sum = 0;
            while(size--){
                Node * temp = q.front();
                q.pop();
                sum +=temp->data;
                
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            
            ans = max(sum,ans);
            
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna