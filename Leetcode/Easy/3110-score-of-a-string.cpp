class Solution 
{
    public:
    int x1, x2, sum = 0, i;
    int scoreOfString(string s) 
    {
        for (i = 0; i < s.size() - 1; i++)
        {
            x1 = static_cast<int>(s[i]);
            x2 = static_cast<int>(s[i + 1]);
            sum += abs(x2 - x1);
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna