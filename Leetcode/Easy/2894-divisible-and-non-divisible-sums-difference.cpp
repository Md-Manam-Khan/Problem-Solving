class Solution 
{
public:
    int differenceOfSums(int n, int m) 
    {
        int i, num1 = 0, num2 = 0;
        for (i = 1; i <= n; i++)
        {
            if ((i % m) != 0)
            {
                num1 += i;
            }
            else
            {
                num2 += i;
            }
        }
        return num1 - num2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna