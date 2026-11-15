class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n = nums.size() * 2;
        vector <int> ans(n);
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[i];
        }
        int j = 0;
        for (int i = nums.size(); i < ans.size(); i++)
        {
            ans[i] = nums[j];
            ++j;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna