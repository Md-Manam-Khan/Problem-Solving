class Solution 
{
public:
    int minMoves(vector<int>& nums) 
    {
        int max = *max_element(nums.begin(), nums.end()), count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            count += abs(nums[i] - max);
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna