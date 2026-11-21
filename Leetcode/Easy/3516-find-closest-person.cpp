class Solution 
{
public:
    int findClosest(int &x, int &y, int &z) 
    {
        x = abs(z - x);
        y = abs(z - y);
        if (x == y)
        {
            return 0;
        }
        else if (x < y)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna