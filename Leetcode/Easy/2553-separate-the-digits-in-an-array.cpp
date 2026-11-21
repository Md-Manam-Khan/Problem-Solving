class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) 
    {
        vector <int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            string s = to_string(nums[i]);
            for (int j = 0; j < s.size(); j++)
            {
                int x = s[j] - '0';
                a.push_back(x);
            }
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna