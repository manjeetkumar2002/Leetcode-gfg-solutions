/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* insertIntoEmpty(Node* last, int data) {
        // code here
        Node * temp = new Node(data);
        temp->next = temp;
        return temp;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna