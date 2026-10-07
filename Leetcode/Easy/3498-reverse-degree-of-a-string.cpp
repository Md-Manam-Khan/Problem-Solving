class Solution 
{
public:
    int reverseDegree(string s) 
    {
        int i, sum = 0;
        for (i = 1; i <= s.size(); i++) 
        {
            sum += (26 - (s[i - 1] - 'a')) * i;
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna