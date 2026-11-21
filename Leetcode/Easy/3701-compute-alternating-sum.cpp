class Solution {
public:
    int alternatingSum(vector<int>& nums) 
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((i % 2) == 0)
            {
                count += nums[i];
            }
            else
            {
                count -= nums[i];
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna