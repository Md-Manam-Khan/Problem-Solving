class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        vector <int> diff;
        for (int i = 0; i < nums.size(); i++)
        {
            int LCount = 0;
            int RCount = 0;
            for (int j = 0; j < i; j++)
            {
                LCount += nums[j];
            }
            for (int k = i + 1; k < nums.size(); k++)
            {
                RCount += nums[k];
            }
            int doff = abs(LCount - RCount);
            diff.push_back(doff);
        }
        return diff;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna