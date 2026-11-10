class Solution {
  public:
    bool containsFour(int n) { 

        while (n > 0) {  

            // If digit is 4, return true  
            if (n % 10 == 4) {  
                return true;  
            }

            // Move to next digit  
            n /= 10;  
        }  
        return false;  
    }  

    int countNumberswith4(int n) { 

        int count = 0;  

        for (int i = 1; i <= n; i++) {  

            // Increment count if i contains digit 4  
            if (containsFour(i)) {  
                count++;  
            }  
        }  
        return count;  
    }  
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna