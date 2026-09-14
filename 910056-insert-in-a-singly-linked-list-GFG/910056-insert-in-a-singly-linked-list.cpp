/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        // code here
        Node * prev = NULL;
        Node * curr = head;
        for(int i=0;i<pos-1;i++){
            prev = curr;
            curr = curr->next;
        }
         Node * temp =new Node(val);
        if(prev!=NULL){
           
            prev->next =  temp;
            temp->next = curr;
        }
        else{
            temp->next = head;
            head = temp;
        }
        
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna