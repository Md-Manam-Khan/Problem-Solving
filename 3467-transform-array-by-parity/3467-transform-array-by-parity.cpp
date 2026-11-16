class Solution {
public:
    vector<int> transformArray(vector<int>& nums) 
    {
        vector <int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            a.push_back(nums[i] % 2);
        }
        sort(a.begin(), a.end());
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna