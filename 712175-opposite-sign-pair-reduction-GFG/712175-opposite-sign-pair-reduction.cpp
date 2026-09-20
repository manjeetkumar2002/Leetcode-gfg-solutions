class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        // code here
        stack<int> s;
        
        for(int i=0;i<arr.size();i++){
            // when stack empty
            if(s.empty()){
                s.push(arr[i]);
            }
            // if same direction
            else if(s.top()<0 and arr[i]<0 || s.top()>0 and arr[i]>0){
                s.push(arr[i]);
            }
            else if(abs(s.top())==abs(arr[i])){
                s.pop();
            }
            else{
               bool alive = true;
               // while both element are in opposite direction
               while(!s.empty() and (s.top()>0 and arr[i]<0 || s.top()<0 and arr[i]>0 )){
                   
                    if(abs(s.top())==abs(arr[i])){
                        s.pop();
                        alive = false;
                        break;
                        
                    }
                    else if(abs(s.top())<abs(arr[i])){
                        s.pop();
                    }
                    else{
                        alive = false;
                        break;
                    }
               }
               
               if(alive){
                   s.push(arr[i]);
               }
            }
        }
        
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna