class Solution 
{
public:
    int minMoves(vector<int>& nums) 
    {
        vector <int> count;
        int total = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] <= nums[j])
                {
                    total += 0;
                }
                else
                {
                    total += abs(nums[j] - nums[i]);
                }
            }
            count.push_back(total);
            total = 0;
        }
        return *max_element(count.begin(), count.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna