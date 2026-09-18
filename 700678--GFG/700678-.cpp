/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int countPairs(Node* r1, Node* r2, int x) {
        // code here
        int count = 0;
        stack<Node*> s1,s2;

            while(r1){
                s1.push(r1);
                r1=r1->left;
            }

            while(r2){
                s2.push(r2);
                r2=r2->right;
            }

            while(!s1.empty() and !s2.empty()){
                // check top element is common 
                int sum = s1.top()->data+s2.top()->data;
                if(sum==x){
                    count++;
                    // move to right side
                    r1 = s1.top()->right;
                    r2 = s2.top()->left;

                    s1.pop();
                    s2.pop();
                }
                else if(sum<x){
                    // move right side of r1
                    r1 = s1.top()->right;
                    s1.pop();
                }
                else{
                    // move right side of r2
                    r2 = s2.top()->left;
                    s2.pop();
                }
                // push all the left side element of r1 and r2

                while(r1){
                    s1.push(r1);
                    r1=r1->left;
                }

                while(r2){
                    s2.push(r2);
                    r2=r2->right;
                }
            }
            return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna