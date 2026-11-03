class Solution 
{
public:
    int minimumOperations(vector<int>& nums) 
    {
        int total = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0, j = 1, k = 2;
            if ((nums[i] % 3) != 0)
            {
                if ((((nums[i] + j) % 3) == 0) || (((nums[i] - j) % 3) == 0))
                {
                    count += j;
                }
                else
                {
                    count += k;
                }
                total += count;
            }
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna