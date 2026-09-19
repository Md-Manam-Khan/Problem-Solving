class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i, x, n, j;
        vector <int> num;
        for (i = 0; i < nums.size() - 1; i++)
        {
            for (j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    num.push_back(i);
                    num.push_back(j);
                }
            }
        }
        return num;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna