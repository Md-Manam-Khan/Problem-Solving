class Solution
{
public:
    int minElement(vector<int>& nums) 
    {
        int s = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            int sum = 0;
            while (x)
            {
                int n = x % 10;
                sum += n;
                x /= 10;
            }
            s = min(s,sum);
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna