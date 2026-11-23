class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            ++x[nums[i]];
        }
        int i = nums.size() / 2;
        int pos;
        for (auto [num, time] : x)
        {
            if (time > i)
            {
                pos = num;
            }
        }
        return pos;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna