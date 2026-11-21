class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        sort (nums.begin(), nums.end());
        int j = nums[0];
        vector <int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == j)
            {
                ++j;
            }
            else
            {
                a.push_back(j);
                ++j;
                --i;
            }
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna