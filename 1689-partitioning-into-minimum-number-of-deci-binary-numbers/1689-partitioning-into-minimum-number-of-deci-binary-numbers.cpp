class Solution 
{
public:
    int minPartitions(string n) 
    {
        int ans =0;
        for(char &c : n)
        {
            ans = max(ans, c-'0');
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna