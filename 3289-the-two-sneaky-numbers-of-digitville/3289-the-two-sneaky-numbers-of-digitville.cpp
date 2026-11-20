class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) 
    {
        unordered_map <int, int> a;
        vector <int> b;
        for (int i = 0; i < nums.size(); i++)
        {
            ++a[nums[i]];
            if (a[nums[i]] > 1)
            {
                b.push_back(nums[i]);
            }
        } 
        return b;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna