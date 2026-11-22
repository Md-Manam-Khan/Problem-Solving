class Solution 
{
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector <int> a;
        int count = nums[0];
        a.push_back(count);
        for (int i = 1; i < nums.size(); i++)
        {
            count += nums[i];
            a.push_back(count);
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna