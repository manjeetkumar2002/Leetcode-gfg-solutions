class Solution {
  public:
    int setBit(int n) {
        // code here
        int num = n;
        int pos=0;
        while(num){
            // if bit is unset mark its position
            
            if(!(num&1)){
                return n | (1<<pos);
            }
            
            pos++;
            num = num>>1;
        }
        
        return n | (1<<pos);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna