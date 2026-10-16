class Solution 
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        int i;
        vector <int> b;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] < pivot)
            {
                b.push_back(nums[i]);
            }
        }
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == pivot)
            {
                b.push_back(nums[i]);
            }
        }
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] > pivot)
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