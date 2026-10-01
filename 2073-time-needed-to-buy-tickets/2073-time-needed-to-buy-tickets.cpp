class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int time = 0;

        for(int i = 0;i<tickets.size();i++)
        q.push(i);


        while(tickets[k]){
            int idx = q.front();
            q.pop();
            tickets[idx]--;
            time++;
            if(tickets[idx])
            q.push(idx);
        }
        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna