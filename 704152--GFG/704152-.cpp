class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int count = 0;
        for(int num=1;num<=n;num++){
            string strNum = to_string(num);
            if(strNum.find('4')!=string::npos)
            count++;
        }
        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna