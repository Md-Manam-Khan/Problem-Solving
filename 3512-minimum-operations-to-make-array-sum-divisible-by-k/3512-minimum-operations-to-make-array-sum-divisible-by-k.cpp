class Solution 
{
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int x = accumulate(nums.begin(), nums.end(), 0);
        return (x % k);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna