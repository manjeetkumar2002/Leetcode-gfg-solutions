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
};*/

class Solution {
  public:

  vector<int> findCommon(Node* r1, Node* r2) {
         vector<int> ans;
            stack<Node*> s1,s2;

            while(r1){
                s1.push(r1);
                r1=r1->left;
            }

            while(r2){
                s2.push(r2);
                r2=r2->left;
            }

            while(!s1.empty() and !s2.empty()){
                // check top element is common 
                if(s1.top()->data==s2.top()->data){
                    ans.push_back(s1.top()->data);
                    // move to right side
                    r1 = s1.top()->right;
                    r2 = s2.top()->right;

                    s1.pop();
                    s2.pop();
                }
                else if(s1.top()->data<s2.top()->data){
                    // move right side of r1
                    r1 = s1.top()->right;
                    s1.pop();
                }
                else{
                    // move right side of r2
                    r2 = s2.top()->right;
                    s2.pop();
                }
                // push all the left side element of r1 and r2

                while(r1){
                    s1.push(r1);
                    r1=r1->left;
                }

                while(r2){
                    s2.push(r2);
                    r2=r2->left;
                }
            }
            return ans;
  }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna