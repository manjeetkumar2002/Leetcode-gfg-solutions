/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    class Box{
        public:
        bool BST;
        int size;
        int min,max;
        Box(){
            BST = 1;
            size = 0;
            min = INT_MAX;
            max = INT_MIN;
        }
    };
    Box * find(Node*root,int& Totalsize){
        // root not exist
        if(!root){
            Totalsize = max(Totalsize,1);
            return new Box();
        }
        // root exist
        Box * lefthead = find(root->left,Totalsize);
        Box * righthead = find(root->right,Totalsize);
        if(lefthead->BST && righthead->BST && root->data>lefthead->max && root->data<righthead->min){
            Box * head = new Box();
            head->size = 1 + lefthead->size+righthead->size;
            Totalsize = max(Totalsize,head->size);
            head->min = min(lefthead->min,root->data);
            head->max = max(righthead->max,root->data);
            return head;
        }
        else{
            lefthead->BST = 0;
            return lefthead;
        }
    }
    int largestBst(Node *root) {
        // code here
        int Totalsize = 0;
        find(root,Totalsize);
        return Totalsize;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna