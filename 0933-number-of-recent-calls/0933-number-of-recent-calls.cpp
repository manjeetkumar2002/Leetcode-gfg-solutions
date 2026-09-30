class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {

    }
    
    int ping(int t) {
        q.push(t);
        while(!q.empty()){
            if(q.front()<t-3000){
                q.pop();
            }
            else{
                break;
            }
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna