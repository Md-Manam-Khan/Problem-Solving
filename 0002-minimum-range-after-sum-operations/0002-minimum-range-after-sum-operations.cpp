class Solution 
{
public:
    int minRange(int a, int b, int c) 
    {
        vector <int> num(3);
        num[0] = a; // 5
        num[1] = b; // 7
        num[2] = c; // 6
        sort(num.begin(), num.end()); // 5 6 7
        int diff = num[2] - num[0]; // 2
        while (1)
        {
            num[2] = num[0] + num[1]; // 5 6 11
            if ((num[2] - num[0]) < diff) // 6 < 2
            {
                diff = num[2] - num[0];
                break;
            }
            else
            {
                break;
            }
        }
        return diff;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna