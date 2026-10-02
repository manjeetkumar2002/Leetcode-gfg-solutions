// struct MinHeapNode
// {
//     char data;
//     int freq;
//     MinHeapNode *left, *right;
// };
class Solution {
  public:
    string huffDecode(struct MinHeapNode* root, string binaryString) {
        // Code here
       // Special case: only one character in Huffman tree
               if (root->left == NULL && root->right == NULL) {
                   string ans;

                   for (int i = 0; i < binaryString.size(); i++) {
                       ans.push_back(root->data);
                   }

                   return ans;
               }
        string ans;
        MinHeapNode * curr = root;
        for(int i=0;i<binaryString.size();i++){
            char ch = binaryString[i];
            if(ch=='1'){
               
                curr = curr->right;
            }
            else{
                
                curr = curr->left;
            }
            
            if(curr->data!='$'){
                ans.push_back(curr->data);
                curr = root;
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna