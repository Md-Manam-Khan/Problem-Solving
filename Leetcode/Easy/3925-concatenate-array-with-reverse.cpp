class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) 
    {
        vector <int> ans (2 * nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[i];
        }
        int j = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            ++j;
            ans[j] = nums[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna