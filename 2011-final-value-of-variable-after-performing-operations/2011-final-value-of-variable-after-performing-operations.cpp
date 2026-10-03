class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int x = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            string s = operations[i];
            if (s[1] == '+')
            {
                ++x;
            }
            else
            {
                --x;
            }
        }
        return x;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna