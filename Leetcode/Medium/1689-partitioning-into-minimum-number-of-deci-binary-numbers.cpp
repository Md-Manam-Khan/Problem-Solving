class Solution 
{
public:
    int minPartitions(string n) 
    {
        int max = n[0] - '0';
        for (int i = 1; i < n.size(); i++)
        {
            if (max < (n[i] - '0'))
            {
                max = n[i] - '0';
            }
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna