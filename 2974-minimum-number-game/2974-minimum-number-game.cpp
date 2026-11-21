class Solution {
public:
    vector<int> numberGame(vector<int>& nums) 
    {
        vector <int> a;
        while(nums.size())
        {
            int minA = *min_element(nums.begin(), nums.end());
            int minApos = min_element(nums.begin(), nums.end()) - nums.begin();
            nums.erase(nums.begin() + minApos);
            int minB = *min_element(nums.begin(), nums.end());
            int minBpos = min_element(nums.begin(), nums.end()) - nums.begin();
            nums.erase(nums.begin() + minBpos);
            a.push_back(minB);
            a.push_back(minA);
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna