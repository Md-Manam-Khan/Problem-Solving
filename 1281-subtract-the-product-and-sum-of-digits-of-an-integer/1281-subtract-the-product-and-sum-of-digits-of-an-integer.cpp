class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int prod = 1, sum = 0, m = n;
        while (n > 0)
        {
            int x = n % 10;
            prod *= x;
            n /= 10;
        }
        while (m > 0)
        {
            int x = m % 10;
            sum += x;
            m /= 10;
        }
        return prod - sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna